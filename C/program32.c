/*
Problem Statement : To check whether the number is Perfect No. or not
*/
#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    register int iCnt = 0;
    register int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Any Number:) ");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("%d is a Perfect Number.", iValue);
    }
    else
    {
        printf("%d is  Not a Perfect Number.", iValue);
    }
    return 0;
}