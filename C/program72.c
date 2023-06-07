// Problem Statement: Accept N numbers from users and perform average of numbers
#include<stdio.h>
#include<stdlib.h>

float Average(int arr[],int iSize){

    float fAvg = 0;
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++){

        iSum=iSum+arr[iCnt];
    }
    // return iSum/iSize;

    fAvg = (float)iSum/iSize;

    return fAvg;

}
int main(){

    int iSize = 0;
    int iCnt = 0;
    int *Arr = NULL;
    float fRet=0.0;

    printf("How many numbers you want to enter:");
    scanf("%d",&iSize);

    Arr = (int *)malloc(iSize * sizeof(int));
    
    printf("Enter Numbers:\n");
    for(iCnt = 0; iCnt<iSize;  iCnt++){
        printf(":)");
        scanf("%d",Arr+iCnt);
    }

    fRet = Average(Arr,iSize);
    printf("The Average of given numbers is %.2f",fRet);

    free(Arr);
    return 0;
}