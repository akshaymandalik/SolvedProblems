// Problem Statement: Accept N numbers from users and perform summation of even and odd numbers.
//  => Same Code
#include<stdio.h>
#include<stdlib.h>

void DisplaySumEvenOdd(int iArr[],int iSize){

     int iCnt = 0;
     int iSumEven = 0;
     int iSumOdd = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++){
            if(*(iArr+iCnt)%2==0){
                iSumEven=iSumEven+iArr[iCnt];

            }else{
                iSumOdd = iSumOdd+iArr[iCnt];
            }
     }
    printf("Sum Even: %d\n",iSumEven);
    printf("Sum Odd: %d\n",iSumOdd);
}
int main(){

    int iSize = 0,iCnt = 0;
    int *Arr=NULL;

    printf("How many numbers you want to enter:");
    scanf("%d",&iSize);

    Arr = (int *) malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf(":)");
        scanf("%d",Arr+iCnt);
    }

    DisplaySumEvenOdd(Arr,iSize);

    free(Arr);

    return 0;

}
