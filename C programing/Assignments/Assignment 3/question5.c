#include<stdio.h>
void main()
{
	int n=153, rem,sum=0;
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("It is a armstrong number");
	}
	else
	{
		printf("It is not a armstrong number");
	}
}