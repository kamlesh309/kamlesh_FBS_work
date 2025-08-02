#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
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
	int search;
	printf("\nEnter the number from above array you want to search:");
	scanf("%d",&search);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nNumber not found");
	}
	else
	{
		printf("\nNumber found at arr[%d]=%d index place",i,search);
	}
}