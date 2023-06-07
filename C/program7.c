///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Application(Problem Statement): Accept number from user and check whether it is divisible by 5 or not.
//
//      Test Cases:
//          1. Input: 23
//             Output: 23 is not divisible by 5
//
//          2. Input : 25
//             Output: 25 is divisible by 5.
//
//          3. Input : -20
//             Output: -20 is divisible by 5.
//
//      Algorithm :
//          START:
//              => Take input from user as No.
//              => Divide that No. 5 and check value of remainder.
//              =>If the value is 0,
//                  Then diplay that No is divisible by 5
//                Otherwise
//                  display no is not divisible by 5.
//          END
//
//      Programming Language : C Programming
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////
//
//      Function Name:    isDivisibleBy5
//      Description:      To check whether input is divisible by 5 or not.
//      Input:            Integer.
//      Output:           Boolean.
//      Author:           Akshay Haribhau Mandalik
//      Date:             Oct 12, 2022
//
///////////////////////////////////////////////

int isDivisibleBy5(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;
    if (iAns == 0)
        return 1;
    else
        return 0;
}
int main() // Entry point of Applcation
{
    int iNo1;
    int iCheck = 0;
    printf("Enter any number: ");
    scanf("%d", &iNo1);
    iCheck = isDivisibleBy5(iNo1);
    if (iCheck == 0)
        printf("%d is divisible by 5 \n", iNo1);
    else
        printf("%d is not divisible 5 \n", iNo1);
    return 0;
}

////////////////////////////////////////////////////////
//
//      Result:
//          Input: 23
//          Output: 23 is not divisible by 5.
//
//          Input : 25
//          Output: 25 is divisible by 5
//
//////////////////////////////////////////////////////////
