// Pattern Printing

#include<stdio.h>

void Display(int iValue){

    register int iCnt = 0;
    
    if(iValue <0){
        iValue = -iValue;
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++){
        printf("%d \t",iCnt);
    }
    for(iCnt = 1;iCnt <= iValue; iCnt++){
        printf("*\t");
    }
    printf("\n");
}

int main(){

    int iNo = 0;

    printf("Enter Number:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}