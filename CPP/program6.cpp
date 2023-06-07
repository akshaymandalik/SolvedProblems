#include <iostream>
using namespace std;

float Multiplication(float fNo1, float fNo2)
{
    return fNo1 * fNo2;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    float fRet = 0;

    cout << "Enter First Number:";
    cin >> fValue1;

    cout << "Enter Second Number:";
    cin >> fValue2;

    fRet = Multiplication(fValue1, fValue2);
    return 0;
}