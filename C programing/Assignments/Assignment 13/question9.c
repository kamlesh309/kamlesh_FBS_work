#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	printf("Enter array elements:");
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