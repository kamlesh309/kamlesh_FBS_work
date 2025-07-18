#include<stdio.h>
void primenumber();
void main()
{
	primenumber();
}
void primenumber()
{
	int n,i=2,flag=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			printf("%d is not a prime number",n);
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("%d is a prime number",n);	
	}	
} 