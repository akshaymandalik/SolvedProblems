/*
Problem Statement: Factorial of a number
*/
#include <stdio.h>

int Factorial(int iNo)
{
    register int iCnt = 0;
    register int iFact = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{

    int iRet = 0;
    int iValue = 0;

    printf("Enter the value:)");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("The Factorial %d is: %d", iValue, iRet);

    return 0;
}