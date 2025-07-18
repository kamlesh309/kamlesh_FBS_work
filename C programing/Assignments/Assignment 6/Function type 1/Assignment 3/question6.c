#include<stdio.h>
void perfectnum();
void main()
{
	perfectnum();
}
void perfectnum()
{
	int n,i=1,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	{
		printf("%d is a Perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
}