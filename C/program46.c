// accept no from user and count number of digit in that number
#include <stdio.h>
int countDigits(int iValue)
{
    int iRem = 0;
    int iCnt = 0;
    if (iValue == 0)
    {
        return 1;
    }
    while (iValue != 0)
    {
        iRem = iValue % 10;
        iCnt++;
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

    iAns = countDigits(iNo);

    printf("Digit in that number is: %d\n", iAns);
    return 0;
}