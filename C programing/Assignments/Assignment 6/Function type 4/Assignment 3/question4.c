#include<stdio.h>
int primeornot(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int res=primeornot(n);
	if(res==1)
	{
		printf("%d is not a prime number.",n);
	}
	else
	{
		printf("%d is a prime number",n);	
	}
}
int primeornot(int n)
{
	int i=2,flag=0;
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