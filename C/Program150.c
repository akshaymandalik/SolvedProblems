#include<stdio.h>

void strlwrX(char *str){

    while(*str != '\0'){

        if(*str >= 'A' && *str <= 'Z'){
        
            *str = *str + 32;
        }
        str++;
    }

}

void struprX(char *str){
    
    while(*str != '\0'){
        if(*str >='a' && *str <='z'){
            *str = *str-32;
        }
        str++;
    }
}

void strtoggleX(char *str){
    
    while(*str != '\0'){

        if(*str >= 'A' && *str <= 'Z'){
        
            *str = *str + 32;
            
        }else if(*str >='a' && *str <='z'){
                *str = *str-32;
        }

        str++;
    }
}

int main(){

    char Arr[20];
    int iChoice = 0;

    printf("Enter Any String:");
    scanf("%[^'\n']s",Arr);

    printf("1.ToLower\n2.ToUpper\n3.Toggle");
    printf("Enter Your Choice:");
    scanf("%d",&iChoice);
    
    switch(iChoice){

        case 1: strlwrX(Arr);
                break;
        case 2: struprX(Arr);
                break;
        case 3: strtoggleX(Arr);
                break;
        default: printf("Invalid Input");                        
    }

    printf("String after conversion is: %s\n",Arr);

    return 0;
}