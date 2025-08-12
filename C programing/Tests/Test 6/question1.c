#include<stdio.h>
void main()
{
	int arr[5],brr[5],i=0;
	printf("Enter array 1 elements:");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\nEnter array  elements:");
	for(i=0;i<5;i++)
		scanf("%d",&brr[i]);
	for(i=0;i<5;i++)
		printf("%d ",brr[i]);
	printf("\nCommon elements in both array:");
	for(i=0;i<5;i++)
	{
		if(arr[i]==brr[i])
		{
			printf("%d ",arr[i]);
		}
	}
}