#include<stdio.h>
void evenodd(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	evenodd(n);
}
void evenodd(int n)
{
	if(n%2==0)
	{
		printf("%d is even number",n);
	}
	else
	{
		printf("%d is odd number",n);
	}
}