#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char character){

    
    if((character >='49') && (character <= '57')){
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