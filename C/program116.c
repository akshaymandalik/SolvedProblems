// 

#include<stdio.h>

void Display(int row, int col ){

   int iCnt = 0;
   int iCnt1 = 0;
   
   if(row != col){
            printf("Row and Columns are not equal.");
            return;
   }

   for(iCnt = 1;iCnt <= row; iCnt++){

        for(iCnt1 = 1;iCnt1 <= col; iCnt1++){
            
            if(iCnt1 == 1 || iCnt1 == col || iCnt == 1 || iCnt == col || iCnt == iCnt1){
              printf("$ ");
            }
            else{
                printf("  ");
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