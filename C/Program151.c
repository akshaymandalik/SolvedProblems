#include<stdio.h>

int countWhiteSpaces( char *str){

    int iCnt = 0;

    while(*str != '\0'){

        if(*str == ' '){
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main(){

    char Arr[20];
    int iRet  = 0;

    printf("Enter Any String:");
    scanf("%[^'\n']s",Arr);

    iRet = countWhiteSpaces(Arr);

    printf("There are %d White Spaces",iRet);
    return 0;
}