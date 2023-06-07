/*
Problem Statement : To check whether the number is Perfect No. or not
*/
#include <stdio.h>
#include <stdbool.h>

int AddFactors(int iNo)
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
    return iSum;
}
bool CheckPerfect(int iData)
{
    int iAns = 0;
    iAns = AddFactors(iData);
    if (iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
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
        printf("%d is perfect number\n", iValue);
    }
    else
    {
        printf("%d is not a perfect number\n", iValue);
    }
    return 0;
}