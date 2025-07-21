#include<stdio.h>
void mergeArray(int,int*,int*);
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	mergeArray(n,arr1,arr2);
}
void mergeArray(int n,int* arr1,int* arr2)
{
	printf("Enter array 1 elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);	
	}
//	printf("Array Elements:");
//	for(int i=0;i<n;i++)
//	{
//		printf("%d ",arr1[i]);	
//	}
	printf("\nEnter array 2 elements:");
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&arr2[i]);
	}
//	printf("\nArray Elements:");
//	for(int i=0;i<n;i++)
//	{	
//		printf("%d ",arr2[i]);
//	}
	int arr3[n*2];
	for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        arr3[n+i]=arr2[i];
    }
    printf("\nMerged Array:");
	for(int i=0;i<n*2;i++)
	{	
		printf("%d ",arr3[i]);
	}
}