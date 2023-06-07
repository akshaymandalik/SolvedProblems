#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#pragma pack(1)
struct Node{
    int iData;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

bool isQueueEmpty(PNODE first){

        if(first == NULL){
            return true;
        }
        else{
            return false;
        }
}

void display(PNODE first){

    if(first == NULL){
        printf("Unable to display.. Stack is Empty\n");
        return;
    }
    else{
        while(first != NULL){

            printf("|%d|<-",first->iData);
            first = first->next;
        }
    }
    printf("NULL\n");
}

void enQueue(PPNODE first,int iVal){

    PNODE temp = *first;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = iVal;
    newn->next = NULL;
    if(*first == NULL){
        *first = newn;
    }
    else{

        while(temp->next != NULL){
            temp  = temp->next;
        }

        temp->next = newn;
      
    }
}

int deQueue(PPNODE first){

    PNODE temp = *first;
    int iVal = 0;
    if(*first == NULL){
        printf("Unable to Delete.. Queue is Empty\n");
        return -1;
    }
    else{

        iVal = (*first)->iData;
        *first = (*first)->next;
        free(temp);
        temp = NULL;
    }

    return iVal;
}

int main(){

    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;
    enQueue(&Head,10);
    enQueue(&Head,20);
    enQueue(&Head,80);
    display(Head);

    iRet = deQueue(&Head);
    printf("Dequeued Element: %d\n",iRet);

    display(Head);

    bRet = isQueueEmpty(Head);

    if(bRet == true){
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue is not Empty\n");
    }
    
    return 0;
}   