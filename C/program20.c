#include <stdio.h>

void Display(iTime)
{

    register int iCnt = 0;
    for (iCnt = 1; iCnt < iTime; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    int iTimes = 0;
    printf("How many numbers you want to print:)");
    scanf("%d", &iTimes);
    Display(iTimes);
    return 0;
}