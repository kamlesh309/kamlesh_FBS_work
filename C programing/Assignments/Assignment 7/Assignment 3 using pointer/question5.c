#include<stdio.h>
void armstrong(int*);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	armstrong(&n);
}
void armstrong(int* n)
{
	int rem,sum=0;
	int temp=*n;
	while(*n>0)
	{
		rem=*n%10;
		sum=sum+rem*rem*rem;
		*n=*n/10;
	}
	if(sum==temp)
	{
		printf("%d is a armstrong number",temp);
	}
	else
	{
		printf("%d is not a armstrong number",temp);
	}
}