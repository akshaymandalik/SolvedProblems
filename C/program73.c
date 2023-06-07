// Problem Statement: Accept N numbers from users and count even numbers
#include<stdio.h>
#include<stdlib.h>

int CountEven(int iArr[],int iSize){

     int iCnt = 0;
     int iCEven = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++){
            if(*(iArr+iCnt)%2==0){
                iCEven++;
            }
     }

    return iCEven;
}
int main(){

    int iSize = 0,iCnt = 0;
    int *Arr=NULL;
    int iRet = 0;

    printf("How many numbers you want to enter:");
    scanf("%d",&iSize);

    Arr = (int *) malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf(":)");
        scanf("%d",Arr+iCnt);
    }

    iRet = CountEven(Arr,iSize);
    printf("There are %d Even Numbers in given Numbers.",iRet);

    free(Arr);

    return 0;

}

