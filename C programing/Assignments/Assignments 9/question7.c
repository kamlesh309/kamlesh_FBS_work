#include<stdio.h>
void sumArray(int,int*,int*);
void main()
{
	int n,i;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("Enter array elements:");
	sumArray(n,arr1,arr2);
}
void sumArray(int n,int* arr1,int* arr2)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);	
	}
	printf("Array Elements:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);	
	}
	printf("\nSecond Array Elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);	
	}
	printf("\nNew Array Elements:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n\nSum of  Array elements:");
	int sumarr[n];
	for(int i=0;i<n;i++)
	{
		sumarr[i]=arr1[i]+arr2[i];
		printf("%d ",sumarr[i]);
	}
}