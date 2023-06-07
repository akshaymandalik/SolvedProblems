/*
 Application(Problem Statement): Addition of two numbers:
 Test Cases:
        Input:  (Static Input) 10,20
        Output: 30

  Algorithm:
    START :
    => Take two variables and initialize them with the input(10,20) respectively
    => Assign the addition of both variables in an 3rd variable.
    => Display the addtion of those two numbers.

    END

    Programming Language: C Programming

*/
#include <stdio.h>

int main()
{
    int iNo1 = 10;
    int iNo2 = 20;
    int iAns = iNo1 + iNo2;
    printf("The sum of %d and %d is %d\n", iNo1, iNo2, iAns);
    return 0;
}