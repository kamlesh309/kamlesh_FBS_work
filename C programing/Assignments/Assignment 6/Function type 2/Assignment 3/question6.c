#include<stdio.h>
int perfectnum();
void main()
{
	int res=perfectnum();
	if(res==1)
	{
		printf("Perfect number.");
	}
	else
	{
		printf("Not a perfect number");
	}
}
int perfectnum()
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
		return 1;
	}
	else
	{
		return 0;
	}
}