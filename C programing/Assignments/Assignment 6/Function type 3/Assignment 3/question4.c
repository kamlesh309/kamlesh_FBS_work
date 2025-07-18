#include<stdio.h>
void primeornot(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	primeornot(n);
}
void primeornot(int n)
{
	int i=2,flag=0;
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			printf("%d is not a prime number.",n);
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("%d is a prime number",n);	
	}	
} 