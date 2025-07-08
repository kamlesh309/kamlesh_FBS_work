//6. Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	{
		printf("divisible by both");
	}
	else if(n%3==0)
	{
		printf("divisible by 3 but not by 5");
	}
	else if(n%5==0)
	{
		printf("divisible by 5 but not by 3");
	}
	else
	{
		printf("divisible by none");
	}
}