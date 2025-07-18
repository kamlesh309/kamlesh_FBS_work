#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("Array Elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}
	
	printf("\nAlternate elements from given array:");
	for(i=0;i<n;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}