/*
Problem Statement: Add Factors of given number
*/
#include <stdio.h>

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
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Any Number:) ");
    scanf("%d", &iValue);

    iRet = AddFactors(iValue);

    printf("Sum of factors of %d is: %d\n", iValue, iRet);

    return 0;
}