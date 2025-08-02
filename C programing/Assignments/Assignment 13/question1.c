#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
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
	int max,min;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
		if(arr[i]<min)
		{
			min=arr[i];	
		}	
	}
	printf("\nMaximum number in the given array:%d",max);
	printf("\nMiniimum number in the given array:%d",min);
}          