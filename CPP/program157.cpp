#include<iostream>
using namespace std;

class ArrayX{

    public:
        int iSize;
        int *Arr;

        ArrayX(int i){

            cout<<"Allocating the Memory of Array:\n";
            iSize = i;
            Arr = new int[iSize];
        }
        ~ArrayX(){

            cout<<"Deallocating the memory of Array:\n";
            delete []Arr;
        }

        void Accept(){

            cout<<"Enter Elements of Array\n";

                for(int iCnt = 0; iCnt<iSize; iCnt++){

                    cin>>Arr[iCnt];
                }
        }
        void Display(){

            cout<<"Elements of Array are:\n";

                for(int iCnt = 0; iCnt<iSize; iCnt++){

                    cout<<Arr[iCnt]<<" ";
                }
        }
};

int main(){

    int iLength = 0;

    cout<<"Enter Size of Array:";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);

    obj->Accept();
    obj->Display();

    delete obj;

    return 0;
}