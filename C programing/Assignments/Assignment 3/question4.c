#include<stdio.h>
void main()
{
	int n=7,i=2,flag=0;
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			printf("It is not a prime number.");
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("%d is a prime number",n);	
	}	
} 