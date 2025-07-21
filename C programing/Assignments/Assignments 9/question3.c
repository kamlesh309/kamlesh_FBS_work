#include<stdio.h>
void sum(int,int*);
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	sum(n,arr);
}
void sum(int n,int* arr)
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
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];	
	}
	printf("\nSum of all array elements=%d",sum);
}