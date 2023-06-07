/*Problem Statement : Return Summation of Numbers from 1 to 5

    */
#include <stdio.h>

int Summation()
{

    int iSum = 0;

    iSum = iSum + 1;
    iSum = iSum + 2;
    iSum = iSum + 3;
    iSum = iSum + 4;
    iSum = iSum + 5;

    return iSum;
}
int main()
{

    int iRet = 0;

    iRet = Summation();

    printf("The summation of 1 to 5 is:%d\n", iRet);

    return 0;
}