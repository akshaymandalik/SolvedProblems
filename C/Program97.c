// Pattern Printing
// ASCII - American Standard Code for Information Interchange.
#include<stdio.h>

void Display(int iValue,int iValue1){

   register int iCnt = 0;
   register int iCnt1 = 0;
   if(iValue<0){
     iValue= -iValue;
   }
   if(iValue1 < 0){
          iValue1 = -iValue1;
   }

   for(iCnt = 1; iCnt <= iValue ; iCnt++){
          for(iCnt1 = 1;iCnt1 <= iValue1; iCnt1++){
               printf("*\t");
          }
          printf("\n");
   }
}

int main(){

    int iNo = 0,iNo1 = 0;

    printf("Enter Number of Rows:");
    scanf("%d",&iNo);
    printf("Enter Number of Cols:");
    scanf("%d",&iNo1);

    Display(iNo,iNo1);

    return 0;
}