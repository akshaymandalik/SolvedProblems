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

    void MaxFrequency(){

        int iDigit = 0;
        int Frequency[10] = {0};
        int iTemp = iNo;
        int iMaxFrequency = 0;
        int iMaxDigit = 0;

        while(iTemp != 0){

            iDigit = iTemp % 10;
            Frequency[iDigit]++;
            iTemp = iTemp / 10;
            
        }
        for(int iCnt = 0; iCnt < 10 ; iCnt++){

            if(Frequency[iCnt]>iMaxFrequency){

                iMaxFrequency = Frequency[iCnt];
                iMaxDigit = iCnt;

            }
        }

        cout<<"Maximum times occurred digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFrequency<<"\n";

         

    }
};

int main(){

    int iVal = 0;
     

    cout<<"Enter A Number:)";
    cin>>iVal;

    Functionalities *obj = new Functionalities(iVal);
    
    obj->MaxFrequency();


    return 0;
}