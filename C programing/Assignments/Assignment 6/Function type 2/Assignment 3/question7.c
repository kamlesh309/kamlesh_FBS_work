#include<stdio.h>
int fact();
void main()
{
	int res=fact();
	printf("Factorial: %d",res);
}
int fact()
{
	int n,fact=1,i=1;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	return fact;
}