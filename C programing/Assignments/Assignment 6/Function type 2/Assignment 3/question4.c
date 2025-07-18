#include<stdio.h>
int prime();
void main()
{
	int res=prime();
	if(res==1)
	{
		printf("It is not a prime number.");
	}
	else
	{
		printf("It is a prime number");
	}
}
int prime()
{
	int i=2,flag=0;
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			return 1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		return 0;	
	}	
} 