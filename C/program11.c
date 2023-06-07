/*
     Application : Accept the number from the user and check whether the no. is divisible by 3 and 5 or not.

     Test Cases:
        1. Input : 50
           Output: The no. is not divisible by 3 and 5.

        2. Input: 33
           Output : The no. is not divisible by 3 and 5.

        3. Input: 15
           Output: The no. is divisible by 3 and 5.

     Algorithm:

        START:
            => Take input from user as no.
            => Divide the number with 3 as well as 5,
            => Check whether both remainders:
                If the values are 0,
                    Then display that the no. is divisible by 3 and 5
                Otherwise display that the number is not divisible by 3 and 5
        END:

    Programming Language: C Language

*/

#include <stdio.h>
#include <stdbool.h>

/*
    Function Name: isDivisibleBy3And5
    Description: To check whether the no is divisible by 3 and 5
    Input: Integer
    Output: Boolean
    Author: Akshay Haribhau Mandalik
    Date: Oct 12,2022

*/

bool isDivisibleBy3And5(int iValue)
{
    int iAns = 0, iAns1 = 0;
    iAns = iValue % 3;
    iAns1 = iValue % 5;
    if ((iAns1 == 0) && (iAns == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Entry Point Function:

int main()
{
    int iNo = 0;
    bool Bcheck = false;
    printf("Enter Any Number:");
    scanf("%d", &iNo);
    Bcheck = isDivisibleBy3And5(iNo);
    if (Bcheck == true)
    {
        printf("%d is divisible by 3 and 5", iNo);
    }
    else
    {
        printf("%d is divisible by 3 and 5", iNo);
    }

    return 0;
}