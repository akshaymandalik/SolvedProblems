#include<stdio.h>

void strCpyXCapital(char *src,char *dest){

    
    
    while(*src != '\0'){

        if(*src>='a' && *src <='z'){
            *dest = *src-32;
        }
        else{
            *dest = *src;
        }
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

    strCpyXCapital(cString1,cString2);

    printf("Original String: %s\n",cString1);
    printf("Copied String: %s",cString2);

    return 0;
}