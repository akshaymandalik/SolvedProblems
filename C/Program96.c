// Pattern Printing
// ASCII - American Standard Code for Information Interchange.
#include<stdio.h>

void Display(int iValue){

   int iCnt = 0;
   char ch = 'a';

   if(iValue<0){
        iValue = -iValue;
   }
   for(iCnt = 1;iCnt <= iValue;iCnt++,ch++){
        printf("%c\n",ch);
        
   }
}

int main(){

    int iNo = 0;

    printf("Enter Number:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}