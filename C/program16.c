#include <stdio.h>

void Display(int iTimes)
{
    register int iCnt = 0;
    for (iCnt = 1; iCnt < iTimes; iCnt++)
    {
        printf("Jay Ganesh..\n");
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