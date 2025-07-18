#include<stdio.h>
void factorial();
void main()
{
	factorial();
}
void factorial()
{
	int n,fact=1,i=1;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d",n,fact);
}