#include<stdio.h>
char charToggleX(char character){

    if(character >='A' && character <='Z'){
            
            return character+32;

    }
    else if(character >='a' && character<='z')
    {
        return character-32;;
    }
    else{
        return character;
    }

}

int main(){

    char ch = '\0';
    char cRet = '\0';

    printf("Enter a character:");
    scanf("%c",&ch);

    cRet = charToggleX(ch);
    printf("Toggled Character:%c",cRet);
    return 0;
}