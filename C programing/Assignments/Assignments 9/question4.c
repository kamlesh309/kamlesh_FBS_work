#include<stdio.h>
void evenodd(int,int*);
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	evenodd(n,arr);	
}
void evenodd(int n,int* arr)
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
	printf("\nEven numbers are ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\nOdd numbers are ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d ",arr[i]);
		}
	}
}