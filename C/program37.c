/*
Problem statement: Accept a number and display in descending order till 1
*/

#include <stdio.h>

void DisplayReverse(int iValue)
{
    register int iCnt = 0;
    for (iCnt = iValue; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}
int main()
{
    int iNo = 0;

    printf("Enter a Number:)");
    scanf("%d", &iNo);

    DisplayReverse(iNo);
    return 0;
}