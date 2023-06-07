#include<stdio.h>
char toLowerCase(char character){

    if(character >='A' || character <='Z'){
            return character+32;
    }else{
        return character;
    }

}

int main(){

    char ch = '\0';
    char cRet = '\0';

    printf("Enter a character:");
    scanf("%c",&ch);

    cRet = toLowerCase(ch);
    printf("The Small Case of %c is %c", ch,cRet);
    return 0;
}