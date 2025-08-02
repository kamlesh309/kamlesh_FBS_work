#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	
	int* arr1=(int*)malloc(sizeof(int)*n);
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);	
	}
	printf("Array Elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);	
	}

	int* arr2=(int*)malloc(sizeof(int)*n);
	printf("\nEnter new array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);	
	}
	printf("Array Elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	printf("\n\nNew Array:");
	int sumarr[n];
	for(i=0;i<n;i++)
	{
		sumarr[i]=arr1[i]+arr2[i];
		printf("%d ",sumarr[i]);
	}
}