#include<stdio.h>
void armstrong();
void main()
{
	armstrong();
}
void armstrong()
{
	int n,rem,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
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