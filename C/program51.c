// accept number from user and count even digits

//// accept no from user and display sum of digit in that number
#include <stdio.h>
void displayEvenOddDigitCount(int iValue)
{
    int iRem = 0;
    int iEvenCnt = 0, iOddCnt = 0;
    if (iValue == 0)
    {
        iEvenCnt++;
    }
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iRem = iValue % 10;
        if (iRem % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iValue = iValue / 10;
    }
    printf("even digit count :%d\n", iEvenCnt);
    printf("Odd digit count :%d\n", iOddCnt);
}
int main()
{
    int iNo = 0;
    // int iAns = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    displayEvenOddDigitCount(iNo);

    // printf("count of even digit is: %d\n", iAns);
    return 0;
}