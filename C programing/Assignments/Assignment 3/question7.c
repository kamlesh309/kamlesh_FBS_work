#include<stdio.h>
void main()
{
	int n=10,fact=1,i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial: %d",fact);
}