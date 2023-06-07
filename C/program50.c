// accept number from user and count even digits

//// accept no from user and display sum of digit in that number
#include <stdio.h>
int countEvenDigits(int iValue)
{
    int iRem = 0;
    int iCnt = 0;
    if (iValue == 0)
    {
        return 1;
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
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}
int main()
{
    int iNo = 0;
    int iAns = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iAns = countEvenDigits(iNo);

    printf("count of even digit is: %d\n", iAns);
    return 0;
}