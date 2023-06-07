#include <stdio.h>

void Display(int iTime)
{
    register int iCnt = 0;

    // for (iCnt = 1; iCnt <= 5; iCnt++)
    // {
    //     printf("Jay Ganesh\n");
    // }

    iCnt = 1;
    while (iCnt <= iTime)
    {
        printf("Jay Ganesh\n");
        iCnt++;
    }
}
int main()
{

    int iTimes = 0;
    printf("Enter how many times you want to print:)");
    scanf("%d", &iTimes);
    Display(iTimes);
    return 0;
}