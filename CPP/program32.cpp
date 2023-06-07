/*
Problem Statement : To check whether the number is Perfect No. or not
*/

// program33.c use krav interview la:

#include <iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter Any Number";
    cin >> iValue;

    bRet = CheckPerfect(iValue);
    if (bRet == true)
    {
        cout << iValue << " is a Perfect Number.\n";
    }
    else
    {
        cout << iValue << " is not a Perfect Number\n";
    }
    return 0;
}