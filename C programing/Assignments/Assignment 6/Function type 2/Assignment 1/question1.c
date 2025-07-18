#include<stdio.h>
int evenodd();
void main()
{	
	int res=evenodd();
	if(res==1)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
}
int evenodd()
{	
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}