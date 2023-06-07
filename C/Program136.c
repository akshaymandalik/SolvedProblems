#include<stdio.h>

int strlenX(char str[]){

    int iLength = 0;
    int iCnt = 0;

    while((str[iCnt])!='\0'){

        iLength++;
        iCnt++;
    }
    return iLength;

}

int main()
{
    char name[10];
    int iRet = 0;
    printf("Enter Any String:");
    scanf("%[^'\n']s",name);

    iRet = strlenX(name);

    printf("The length of string is: %d \n",iRet);

    
    return 0;
}