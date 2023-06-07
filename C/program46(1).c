// accept no from user and count number of digit in that number

#include<stdio.h>

int CountDigits(int iData){

        int iRem = 0,iCnt = 0;
        if(iData == 0){
            return 1;
        }
        while(iData !=0){
            iRem = iData%10;
            iCnt++;
            iData = iData/10;
        }
        return iCnt;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Any Number:");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Their are %d digits in %d", iRet,iValue);

    return 0;
}