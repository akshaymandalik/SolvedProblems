//// accept no from user and display sum of digit in that number
#include <stdio.h>
int sumDigits(int iValue)
{
    int iRem = 0;
    int iSum = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iRem = iValue % 10;
        iSum = iSum + iRem;
        iValue = iValue / 10;
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iAns = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iAns = sumDigits(iNo);

    printf("Summation of digit is: %d\n", iAns);
    return 0;
}