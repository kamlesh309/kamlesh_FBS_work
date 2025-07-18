//6. Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
int divisibility();
void main()
{
	int res=divisibility();
	if(res==1)
	{
		printf("divisible by both");
	}
	else if(res==2)
	{
		printf("divisible by 3 but not by 5");
	}
	else if(res==3)
	{
		printf("divisible by 5 but not by 3");
	}
	else
	{
		printf("divisible by none");
	}
}
int divisibility()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	{
		return 1;
	}
	else if(n%3==0)
	{
		return 2;
	}
	else if(n%5==0)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}