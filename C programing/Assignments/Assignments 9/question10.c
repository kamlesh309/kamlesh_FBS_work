#include<stdio.h>
void sortArray(int,int*);
void main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	sortArray(n,arr);
}
void sortArray(int n,int* arr)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	printf("Array Elements:");
	for(int i=0;i<n-1;i++)
	{
		int flag=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
	}
}