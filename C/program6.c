////////////////////////////////////
//
//      Application : Multiplication of 2 integer number
//      Input: 45,10
//      Output: 450
//      Author : Akshay Haribhau Mandalik
//      Last Modified: Oct 11, 2022
//
////////////////////////////////////

#include <stdio.h>

int Multiplication(int iValue1, int iValue2)
{
    int iAns = 0;

    iAns = iValue1 * iValue2;

    return iAns;
}
int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter First No:) ");
    scanf("%d", &iNo1);

    printf("Enter Second No:) ");
    scanf("%d", &iNo2);

    iMult = Multiplication(iNo1, iNo2);
    printf("Multiplication is :) %d", iMult);
    return 0;
}