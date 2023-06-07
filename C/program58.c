#include<stdio.h>

int Reverse(int iValue){

    int iNum=0,iRev=0;

    while(iValue!=0){

        iNum = iValue%10;
        iRev = (iRev*10)+iNum;
        iValue = iValue/10;

    }
    return iRev;
}

int main(){

    int iNo =0,iRet=0;
    printf("Enter Number:");
    scanf("%d",&iNo);
    iRet = Reverse(iNo);
    printf("The Reverse of %d is %d ",iNo,iRet);
    return 0;
}