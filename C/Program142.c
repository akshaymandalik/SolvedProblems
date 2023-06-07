#include<stdio.h>

int findCharacter(char *str,char ch){

    
    int iCnt = 0;

    while((*str)!='\0'){

        if((*str) == ch){

            iCnt++;
        }
        str++;
       
    }
    return iCnt;

}

int main()
{
    char name[10];
    char ch='\0';
    int iRet = 0;

    printf("Enter Any String:");
    scanf("%[^'\n']s",name);

    printf("Enter Character:");
    scanf(" %c",&ch);  // 1st Solution : Space before %c .

    iRet = findCharacter(name,ch);

    printf("The frequency of %c is: %d \n",ch,iRet);

    
    return 0;
}