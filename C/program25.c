/*
Problem Statement: Return Summation of Numbers from 1 to 5

*/
#include <stdio.h>

int Summation()
{

    int iNo1 = 1, iNo2 = 2, iNo3 = 3, iNo4 = 4, iNo5 = 5;
    int iSum = 0;

    iSum = iSum + iNo1;
    iSum = iSum + iNo2;
    iSum = iSum + iNo3;
    iSum = iSum + iNo4;
    iSum = iSum + iNo5;

    return iSum;
}
int main()
{

    int iRet = 0;

    iRet = Summation();

    printf("The summation of 1 to 5 is:%d\n", iRet);

    return 0;
}