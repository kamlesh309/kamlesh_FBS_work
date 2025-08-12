#include <stdio.h>
int Palindrome(int *arr,int size);
void main() 
{
    int arr[5];
    printf("Enter 5 array elements:");
    for (int i=0;i<5;i++)
        scanf("%d",&arr[i]);
	int choice=Palindrome(arr,5);	
    if(choice==1)
        printf("Array is a palindrome.");
    else if(choice==0)
        printf("Array is not a palindrome.");
}
int Palindrome(int *arr,int size) 
{
    int *start=arr;          
    int *end=arr+size-1; 

    while(start<end) 
    {
        if(*start != *end)
            return 0; 
        start++;
        end--;
    }
    return 1; 
}

