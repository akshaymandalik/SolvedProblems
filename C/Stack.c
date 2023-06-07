#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#pragma pack(1)
struct Node {
    int iData;
    struct Node * next;

};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

bool isStackEmpty(PNODE first){

    if(first == NULL){
        return true;
    }
    return false;
}

void display(PNODE first){

    if(first == NULL){
        printf("Unable to display.. Stack is empty\n");
        return;
    }
    else{

        while(first != NULL){

            printf("|%d|->",first->iData);
            first = first->next;
        }
        printf("NULL\n");
    }

}

void push(PPNODE first,int iVal){

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = iVal;
    newn->next = NULL;
    if(*first == NULL){
        *first = newn;
    }
    else{

        newn->next = *first;
        *first = newn;
    }


}

int pop(PPNODE first){

    PNODE temp = *first;
    int iVal = 0;

    if(*first == NULL){
        
        printf("Unable to pop element. Stack is Empty\n");
        return -1;
    }
    else{   

        iVal = (*first)->iData;
        *first= (*first)->next;
        free(temp);
        temp = NULL;
    }

    return iVal;
}

int main(){

    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

    push(&Head,10);
    push(&Head,20);
    push(&Head,13);
    push(&Head,45);
    iRet = pop(&Head);
    printf("Popped Element:%d\n",iRet);

    display(Head);

    bRet = isStackEmpty(Head);
    if(bRet == true){
        printf("Stack is  Empty\n");
    }
    else{
        printf("Stack is not Empty\n");
    }



    return 0;
}