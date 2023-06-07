// Accept N numbers from user and find largest from that number.

#include<stdio.h>
#include<stdlib.h>

int FindLargest(int Arr[],int iSize){

    int iCnt = 0;
    int largest = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++){
        if(Arr[iCnt] > largest){
            largest = Arr[iCnt];
        }
    }
    return largest;
}

int main(){

    int *Arr = NULL,iSize = 0;
    int iRet = 0;

    printf("Enter How many numbers you want to enter:");
    scanf("%d",&iSize);

    Arr = (int *) malloc(iSize * sizeof(int));

    printf("Enter Elements:\n");

    for(int iCnt = 0;iCnt < iSize; iCnt++){
            printf(":)");
            scanf("%d",&Arr[iCnt]);
    }

    iRet = FindLargest(Arr,iSize);
    
    printf("The Largest Number from given Numbers is : %d ",iRet);

    free(Arr);
     
    return 0;
}