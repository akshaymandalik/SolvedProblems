// Problem Statement: Accept number from user and return largest digit from the number
#include<stdio.h>

int LargestDigit(int iData){

    int iLargest = 0,iDigit=0;
    if(iData<0){
        iData = -(iData);
    }
    while(iData !=0){

        iDigit = iData%10;

        if(iDigit > iLargest){
            iLargest = iDigit;
            
            if(iLargest==9){
                break;
            }
        }
        

        

        iData=iData/10;
    }

    return iLargest;
}
int main(){

    int iValue=0,iRet=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    iRet = LargestDigit(iValue);
    printf("The largest digit in %d is %d ",iValue,iRet);
    return 0;
}