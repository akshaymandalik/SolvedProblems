#include<stdio.h>

int countSmall(char *str){

    
    int iCnt = 0;

    while((*str)!='\0'){

        if(((*str) >='a' && (*str) <='z' )){
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

    iRet = countSmall(name);

    printf("The length of string is: %d \n",iRet);

    
    return 0;
}