#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char character){

    
    if((character >='0') && (character <= '9')){
        return true;

    }
    else{
        return false;
    }


}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter one character:");
    scanf("%c",&cValue);

    bRet = IsDigit(cValue);

    if(bRet == true ){
        printf("%c is a digit\n",cValue);
    }
    else{
        printf("%c is not a digit\n",cValue);
    }

    return 0;
}