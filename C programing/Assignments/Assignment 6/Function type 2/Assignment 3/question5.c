#include<stdio.h>
int armstrong();
void main()
{
	int res=armstrong();
	if(res==1)
	{
		printf("It is a armstrong number");
	}
	else
	{
		printf("It is not a armstrong number");
	}
}
int armstrong()
{
	int n, rem,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==temp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}