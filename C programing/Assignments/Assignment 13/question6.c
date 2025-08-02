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
	for(i=0;i<n;i++)
	{
		int temp=arr[i];
		int flag=0,count=0;
		for(int j=2;j<temp;j++)
		{
			if(temp%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
			printf("\n%d is prime number",temp);
		}	
	}
}
	                  