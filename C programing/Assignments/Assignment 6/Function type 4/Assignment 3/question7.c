#include<stdio.h>
int factorial(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int res=factorial(n);
	printf("Factorial: %d",res);
}
int factorial(int n)
{
	int fact=1,i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	return fact;
}