// Display Reverse Array
#include<stdio.h>
#include<stdlib.h>

void  Reverse(int Arr[],int iSize){

    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >= 0; iCnt--){
        printf("%d\t",Arr[iCnt]);
    }
}

int main(){

    int *Arr = NULL,iSize = 0;

    printf("Enter How many numbers you want to enter:");
    scanf("%d",&iSize);

    Arr = (int *) malloc(iSize * sizeof(int));

    printf("Enter Elements:\n");

    for(int iCnt = 0;iCnt < iSize; iCnt++){
            printf(":)");
            scanf("%d",&Arr[iCnt]);
    }

    Reverse(Arr,iSize);
    

    free(Arr);
     
    return 0;
}