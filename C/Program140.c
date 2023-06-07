#include<stdio.h>

int countCapital(char *str){

    
    int iCnt = 0;

    while((*str)!='\0'){

        if(((*str) >='A' && (*str) <='Z' )){
                iCnt++;

        }
        str++;
       
    }
    return iCnt;

}

int main()
{
    char name[10];
    int iRet = 0;
    printf("Enter Any String:");
    scanf("%[^'\n']s",name);

    iRet = countCapital(name);

    printf("The length of string is: %d \n",iRet);

    
    return 0;
}