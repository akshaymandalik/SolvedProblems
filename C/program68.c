// Problem Statement: Accept N numbers from users and perform addition of numbers
// 69,70,71 => Same Code
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize){
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++){
        iSum = iSum+Arr[iCnt];
    }
    return iSum;
}

int main(){

    int iSize = 0, iCnt = 0, *Arr = NULL,iRet = 0;

    printf("Enter How many numbers you want to enter:");
    scanf("%d",&iSize);

    Arr = (int*) malloc(sizeof(int)*iSize);

    printf("Enter Elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf(":)");
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Summation(Arr,iSize);
    printf("The sum of entered numbers is %d :",iRet);

    free();

    return 0;
}