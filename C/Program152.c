#include<stdio.h>

int strCpyX(char *src,char *dest){

    

    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src;
    
}

int main(){

    char cString1[20];
    char cString2[20];

    printf("Enter Any String:");
    scanf("%[^'\n']s",cString1);

    strCpyX(cString1,cString2);

    printf("Oroginal String: %s",cString1);
    printf("Copied String: %s",cString2);

    return 0;
}