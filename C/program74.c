// Problem Statement: Accept N numbers from users and count even numbers
// 75,76 => Same Code
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOdd(int iArr[],int iSize){

     int iCnt = 0;
     int iCeven = 0;
     int iCodd = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++){
            if(*(iArr+iCnt)%2==0){
                iCeven++;

            }else{
                iCodd++;
            }
     }
    printf("Even: %d\n",iCeven);
    printf("Odd: %d\n",iCodd);
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

    DisplayEvenOdd(Arr,iSize);

    free(Arr);

    return 0;

}

