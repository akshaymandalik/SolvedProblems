/*
Problem Statement:  Display Non Factors of a Number
*/

#include <stdio.h>

int SumNotFactors(int iData)
{
    register int iCnt = 0;
    register int iSum = 0;
    for (iCnt = 1; iCnt < iData; iCnt++)
    {
        if (iData % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter A Number:)");
    scanf("%d", &iValue);

    iRet = SumNotFactors(iValue);
    printf("Summation of non factors of %d is %d\n", iValue, iRet);
    return 0;
}