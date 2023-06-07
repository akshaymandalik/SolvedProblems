#include<stdio.h>
#include<stdbool.h>



int main()
{
    char name[30];
    
    printf("Enter you name:");
    // scanf("%s",name);
    scanf("%[^'\n']s",name);

    printf("Your Name is : %s",name);

    fflush(stdin);
    
    return 0;
}