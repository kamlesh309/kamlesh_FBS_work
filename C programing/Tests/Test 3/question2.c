#include<stdio.h>
void main()
{
	int start,end,sum=0;
	printf("Enter start number:");
	scanf("%d",&start);
	printf("Enter end number:");
	scanf("%d",&end);
	for (int i=start; i<=end; i=i+2) 
	{
        sum=sum+i;
    }
    printf("Sum of alternate number=%d",sum);
}