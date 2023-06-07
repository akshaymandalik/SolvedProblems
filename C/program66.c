// Problem Statement: Accept number from user and return largest digit from the number
#include<stdio.h>

int SmallestDigit(int iData){

    int iSmallest = 9,iDigit=0;
    if(iData<0){
        iData = -(iData);
    }
    while(iData !=0){

        iDigit = iData%10;

        if(iDigit < iSmallest){
            iLargest = iDigit;
            
            
        }
        

        

        iData=iData/10;
    }

    return iSmallest;
}
int main(){

    int iValue=0,iRet=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    iRet = SmallestDigit(iValue);
    printf("The Smallest digit in %d is %d ",iValue,iRet);
    return 0;
}