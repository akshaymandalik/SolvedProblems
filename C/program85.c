// find out last occurence of a Number

#include<stdio.h>
#include<stdlib.h>
int LastOccurence(int Arr[],int iSize,int iValue){
        int iCnt = 0;

        for(iCnt = iSize-1;iCnt>= 0;iCnt--){
             if(Arr[iCnt]== iValue){
                    break;
             }
        }
        if(iCnt == -1){
            return -1;
        }
        else{
            return iCnt;
        }
}
int main(){

    int *Arr = NULL,iSize =  0;
    int iCnt = 0,iValue = 0,iPos;

    printf("Enter How Many Numbers You Want to Enter:");
    scanf("%d",& iSize);

    Arr = (int *) malloc(iSize * sizeof(int));

    printf("enter Elements:");

    for(iCnt = 0;iCnt<iSize; iCnt++){
        printf(":)");
        scanf("%d",&Arr[iCnt]);
    }
    printf("Enter Element to Search:");
    scanf("%d",&iValue);

    iPos = LastOccurence(Arr,iSize,iValue);
    printf("The Last Occurence of %d is %d ",iValue,iPos);

    free(Arr);

    return 0;
}