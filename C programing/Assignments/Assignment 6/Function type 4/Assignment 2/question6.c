//6. Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
int divisibility(int);
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int res=divisibility(n);
	if(res==1)
	{
		printf("%d is divisible by both 3 and 5",n);
	}
	else if(res==2)
	{
		printf("%d is divisible by 3 but not by 5",n);
	}
	else if(res==3)
	{
		printf("%d is divisible by 5 but not by 3",n);
	}
	else
	{
		printf("%d is divisible by none",n);
	}
}
int divisibility(int n)
{
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