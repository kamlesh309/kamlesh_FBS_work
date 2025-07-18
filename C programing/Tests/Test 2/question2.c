#include<stdio.h>
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	if(no>0)
	{
		printf("no is positive");
	}
	else if(no<0)
	{
		printf("no is negative");
	}
	else
	{
		printf("no is zero");
	}
}