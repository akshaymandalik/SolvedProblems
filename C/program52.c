// reverse number
#include <stdio.h>
int reverseNumber(int iValue)
{
    int iRem = 0;
    int iRev = 0;
    while (iValue != 0)
    {
        iRem = iValue % 10;
        iRev = iRev * 10 + iRem;
        iValue = iValue / 10;
    }
    return iRev;
}
int main()
{
    int iNo = 0;
    int iAns = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iAns = reverseNumber(iNo);

    printf("count of even digit is: %d\n", iAns);
    return 0;
}