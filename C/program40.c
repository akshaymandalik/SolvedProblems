/*
 Problem Statement: Accept a number and Display Even Factors of that Number
*/

#include <stdio.h>
void DisplayOddFactors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt = iCnt + 2)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Value:)");
    scanf("%d", &iValue);

    DisplayOddFactors(iValue);
    return 0;
}