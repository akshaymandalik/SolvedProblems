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
 Programming Language : CPP Programming

*/
#include <iostream>
using namespace std;

int main()
{
    float fNo1 = 0, fNo2 = 0;
    float fMul = 0;

    cout << "Enter First Number:)";
    cin >> fNo1;

    cout << "Enter Second Number:)";
    cin >> fNo2;

    fMul = fNo1 * fNo2;

    cout << "The Multiplication of " << fNo1 << " and " << fNo2 << " is " << fMul << "\n";

    return 0;
}