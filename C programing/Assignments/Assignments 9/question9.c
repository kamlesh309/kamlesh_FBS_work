#include<stdio.h>
void reverseArray(int,int*);
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	reverseArray(n,arr);
}
void reverseArray(int n,int* arr)
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
	for(int i=0;i<n/2;i++)
	{
		int reversearr=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=reversearr;
	}
	printf("\nReverse of entered array elements:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);		
	}
}