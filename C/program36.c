/*
Problem Statement: Accept a number and display its table
*/

#include <stdio.h>
void DisplayTable(int iData)
{
    register int iCnt = 0;
    printf("-------------------------------\n");
    printf("Table of %d is: \n", iData);
    printf("-------------------------------\n");
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf(" |  %d \t|\n", (iCnt * iData));
    }
    printf("-------------------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter A Number:)");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return 0;
}