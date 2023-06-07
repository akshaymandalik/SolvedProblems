// Problem Statement: Accept N numbers from users and a number.Check Whether that number is there is array or not. 
//  => Same Code
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
// Step 5 : Perform the operation on array
bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            
            break;
        }
    }
    if(iCnt == iSize){

        return false;
    }
    else{
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    bool bRet = false;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout  : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    bRet = Search(ptr, iLength, iValue);

    if(bRet==true){
        printf("Found Out");
    }
    else{
        printf("Not Found");
    }
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}