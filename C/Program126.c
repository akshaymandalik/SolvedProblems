#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char character){

    
    if((character >='a') && (character <= 'z')){
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

    bRet = CheckSmall(cValue);

    if(bRet == true ){
        printf("%c is small case letter\n",cValue);
    }
    else{
        printf("%c is not a small case letter\n",cValue);
    }

    return 0;
}