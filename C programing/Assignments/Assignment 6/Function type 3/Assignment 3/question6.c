#include<stdio.h>
void perfectnum(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	perfectnum(n);
}
void perfectnum(int n)
{
	int i=1,sum=0;
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
		printf("%d is Not a perfect number",n);
	}
}