// 

#include<stdio.h>

void Display(int row, int col ){

   int iCnt = 0;
   int iCnt1 = 0;

   for(iCnt = 1;iCnt <= row; iCnt++){

        for(iCnt1 = 1;iCnt1 <= col; iCnt1++){
            
            if(iCnt % 2 == 0){
                printf("#\t");

            }
            else{
                printf("*\t");

            }
        }
        printf("\n");
   } 

}

int main(){

    int iCol  = 0, iRow = 0;

    printf("Enter no. of column:");
    scanf("%d",&iCol);

    printf("Enter no. of Rows:");
    scanf("%d",&iRow);

    Display(iRow,iCol);

    return 0;
}