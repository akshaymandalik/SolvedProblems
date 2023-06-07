/*Problem Statement : Return Summation of Numbers from 1 to N Numbers

    */
#include <stdio.h>

int Summation(int iNo)
{

    register int iSum = 0;
    register int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{

    int iRet = 0;
    int iValue = 0;

    printf("Enter Value:)");
    scanf("%d", &iValue);

    iRet = Summation(iValue);

    printf("The summation of 1 to %d is: %d\n", iValue, iRet);

    return 0;
}