/*
Problem Statement: Return Summation of Numbers from 1 to 5

*/
#include <stdio.h>

int Summation()
{

    int iNo1 = 1, iNo2 = 2, iNo3 = 3, iNo4 = 4, iNo5 = 5;
    int iSum = 0;
    iSum = iNo1 + iNo2 + iNo3 + iNo4 + iNo5;
    return iSum;
}
int main()
{

    int iRet = 0;

    iRet = Summation();

    printf("The summation of 1 to 5 is:%d", iRet);

    return 0;
}