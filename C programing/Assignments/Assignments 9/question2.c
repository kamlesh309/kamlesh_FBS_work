#include<stdio.h>
void searchArray(int,int*);
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");	
	searchArray(n,arr);
}
void searchArray(int n,int* arr)
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
	int i=0,search;
	printf("\nEnter the number from above array you want to search:");
	scanf("%d",&search);
	int flag=0,index=-1;
	for(int i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nNumber not found");
	}
	else
	{
		printf("\nNumber found at i=%d index position",index);
	}
	

}