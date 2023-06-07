/*
Problem Statement:  Display Non Factors of a Number
*/

#include <stdio.h>

void DisplayNotFactors(int iData)
{
    register int iCnt = 0;
    printf("Non Factors of %d are: ", iData);
    for (iCnt = 1; iCnt < iData; iCnt++)
    {
        if (iData % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("Enter A Number");
    scanf("%d", &iValue);

    DisplayNotFactors(iValue);
    return 0;
}