#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
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
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];	
	}
	printf("\nSum of all array elements=%d",sum);
}