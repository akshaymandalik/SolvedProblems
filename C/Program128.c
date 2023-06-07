#include<stdio.h>
#include<stdbool.h>

bool CheckBig(char character){

    
    if((character >='A') && (character <= 'Z')){
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

    bRet = CheckBig(cValue);

    if(bRet == true ){
        printf("%c is big case letter\n",cValue);
    }
    else{
        printf("%c is not a big case letter\n",cValue);
    }

    return 0;
}