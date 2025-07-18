#include<stdio.h>
int evenodd(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	evenodd(n);
	int res=evenodd(n);
	if(res==1)
		printf("%d is Even number",n);
	else
		printf("%d is Odd number",n);
}

int evenodd(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}