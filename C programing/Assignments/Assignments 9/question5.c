#include<stdio.h>
void alternatenum(int,int*);
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	alternatenum(n,arr);
}
void alternatenum(int n,int* arr)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("Array Elements:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}
	
	printf("\nAlternate elements from given array:");
	for(int i=0;i<n;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}