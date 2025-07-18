//6. Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
void divisibility();
void main()
{
	divisibility();
}
void divisibility()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	{
		printf("%d is divisible by both",n);
	}
	else if(n%3==0)
	{
		printf("%d is divisible by 3 but not by 5",n);
	}
	else if(n%5==0)
	{
		printf("%d is divisible by 5 but not by 3",n);
	}
	else
	{
		printf("%d is divisible by none",n);
	}
}