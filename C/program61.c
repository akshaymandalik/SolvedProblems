#include<stdio.h>
#include<stdbool.h>

int Reverse(int iValue){

    int iNum=0,iRev=0;
    int iTemp=iValue;

    for(iValue=iValue;iValue!=0;iValue=iValue/10){

        iNum = iValue%10;
        iRev = (iRev*10)+iNum;

    }
    return iRev;
}

bool checkPalindrome(int iData){

    int iRev = 0;
    iRev = Reverse(iData);
    if(iRev == iData){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int iNo =0;
    bool bRet=false;
    printf("Enter Number:");
    scanf("%d",&iNo);
    bRet = checkPalindrome(iNo);
    if(bRet == true){
        printf("%d is palindrome",iNo);
    }
    else{
    printf("%d is not palindrome\n",iNo);

    }
    return 0;
}