/*
 Problem Statement: Accept a number and Display Even Factors of that Number
*/

#include <stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % 2 == 0) && (iNo % iCnt == 0))
        {
            printf("%d", iCnt);
        }
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Value:)");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);
    return 0;
}