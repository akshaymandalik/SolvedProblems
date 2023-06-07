#include<iostream>
using namespace std;

class DigitX{

    public:
        int iNo;

        DigitX(){

            iNo = 0;
        }
        DigitX(int i){
            iNo = i;
        }

};

class Functionalities:public DigitX{

public:
   
   Functionalities(int i):DigitX(i){}

    int AddEvenDigits(){

         int iDigit = 0;
         int iSumEven = 0;
         int iData = iNo;

        while(iData != 0){
        iDigit = iData % 10;
        if((iDigit % 2) == 0){    

            iSumEven = iSumEven + iDigit;
        }  
        iData = iData / 10;
    }
    return iSumEven;

    }
};

int main(){

    int iVal = 0;
    int iRet = 0;
     
    cout<<"Enter A Number:)";
    cin>>iVal;

    Functionalities *obj = new Functionalities(iVal);
    
    iRet = obj->AddEvenDigits();
    cout<<"Sum of even Digits:"<<iRet;
    

    return 0;
}