#include<stdio.h>
void factorial(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	factorial(n);
}
void factorial(int n)
{
	int fact=1,i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial: %d",fact);
}