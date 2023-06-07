/*Problem Statement : Return Summation of Numbers from 1 to 5

    */
#include <stdio.h>

int Summation()
{

    int iSum = 0;

    int iCnt = 0;
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{

    int iRet = 0;

    iRet = Summation();

    printf("The summation of 1 to 5 is:%d\n", iRet);

    return 0;
}