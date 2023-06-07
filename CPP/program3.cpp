/*
 Application(Problem Statement): Addition of two numbers:
 Test Cases:
        Input:  (Static Input) 10.10,20.4
        Output: 30.50

  Algorithm:
    START :
    => Take two variables and initialize them with the input(10,20) respectively
    => Assign the addition of both variables in an 3rd variable.
    => Display the addtion of those two numbers.

    END

    Programming Language: CPP Programming

*/
#include <iostream>
using namespace std;

int main()
{
    float fValue1 = 10.10, fValue2 = 20.4;
    float fAns = fValue1 + fValue2;
    cout << "The Addition of " << fValue1 << " and " << fValue2 << " is:" << fAns << "\n";
    return 0;
}