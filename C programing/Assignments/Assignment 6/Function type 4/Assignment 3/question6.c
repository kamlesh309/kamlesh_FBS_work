#include<stdio.h>
int perfectnum(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int res=perfectnum(n);
	if(res==1)
	{
		printf("%d is a Perfect number",n);
	}
	else
	{
		printf("%d is Not a perfect number",n);
	}
}
int perfectnum(int n)
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
		return 1;
	}
	else
	{
		return 0;
	}
}