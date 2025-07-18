//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
void operators();
void main()
{
	operators();
}
void operators()
{
	int n1,n2,res;
	char op;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	fflush(stdin);
	printf("Enter operator:");
	scanf("%c",&op);
	if(op=='+')
	{
		res=n1+n2;
	}
	else if(op=='-')
	{
		res=n1-n2;
	}
	else if(op=='*')
	{
		res=n1*n2;
	}
	else if(op=='/')
	{
		res=n1/n2;
	}
	printf("Result using %c operator:%d",op,res);
}