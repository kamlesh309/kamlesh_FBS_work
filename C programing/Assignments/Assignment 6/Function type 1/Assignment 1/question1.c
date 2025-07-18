#include<stdio.h>
void evenodd();
void main()
{
	evenodd();
}
void evenodd()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even number",n);
	}
	else
	{
		printf("%d is odd number",n);
	}
}