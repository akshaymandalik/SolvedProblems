/*
 Application(Problem Statement): Accept two numbers from user and display their multiplcation
 Test Cases:
        1. Input: 10,20
           Output: 200

        2. Input: 4, 5
           Output: 20

 Algorithm:
        START:
        => Accept two numbers from user in two variables
        => Multiply both the numbers and assign that value in the third value
        => Display the multiplication.
        END
 Programming Language : C Programming

*/
#include <stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter First No:) ");
    scanf("%d", &iNo1);

    printf("Enter Second No:) ");
    scanf("%d", &iNo2);

    printf("First Number is :%d\n", iNo1);
    printf("Second Number is:%d\n", iNo2);

    iMult = iNo1 * iNo2;

    printf("Multiplication is :) %d", iMult);
    return 0;
}