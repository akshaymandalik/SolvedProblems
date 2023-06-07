/*
Problem Statement: Display Factors of given number
*/
#include <stdio.h>

void DisplayFactors(int iNo)
{
    register int iCnt = 0;

    printf("Factors of %d are:", iNo);

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
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

    printf("Enter Any Number:) ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}