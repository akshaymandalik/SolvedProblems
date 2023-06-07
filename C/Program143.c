#include<stdio.h>
#include<stdbool.h>

bool isPresent(char *str,char ch){

    
    int iCnt = 0;

    while((*str)!='\0'){

        if((*str) == ch){

            break;
        }
        str++;
       
    }
    if((*str )=='\0'){
        return false;
    }
    else{
        return true;
    }
   

}

int main()
{
    char name[10];
    char ch='\0';
    bool bRet = false;

    printf("Enter Any String:");
    scanf("%[^'\n']s",name);

    printf("Enter Character:");
    scanf(" %c",&ch);  // 1st Solution : Space before %c .

    bRet = isPresent(name,ch);

    if(bRet == true){
            printf("The character is present in string.");
    }
    else{
        
                    printf("The character is Not present in string.");

    }
    
    return 0;
}