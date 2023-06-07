/*
Problem statement: Accept a number and display in descending order till 1
*/

#include <stdio.h>

void DisplayReverse(int iValue)
{
    register int iCnt = 0;
    iCnt = iValue;
    while (iCnt >= 1)
    {
        printf("%d\t ", iCnt);
        iCnt--;
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