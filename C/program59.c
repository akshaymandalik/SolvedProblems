#include<stdio.h>
#include<stdbool.h>
bool Reverse(int iValue){

    int iNum=0,iRev=0;
    int iTemp=iValue;

    while(iValue!=0){

        iNum = iValue%10;
        iRev = (iRev*10)+iNum;
        iValue = iValue/10;

    }
    if(iRev == iTemp){
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
    bRet = Reverse(iNo);
    if(bRet == true){
        printf("%d is palindrome",iNo);
    }
    else{
    printf("%d is not palindrome\n",iNo);

    }
    return 0;
}