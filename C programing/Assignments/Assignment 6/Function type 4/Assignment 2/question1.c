//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
int operators(int,int,char);
void main()
{
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	char op;
	fflush(stdin);
	printf("Enter operator:");
	scanf("%c",&op);
	operators(n1,n2,op);
	int result=operators(n1,n2,op);
	printf("Result using %c operator:%d",op,result);
}
int operators(int n1,int n2,char op)
{	
	int res;
	if(op=='+')
	{
		res=n1+n2;
		return res;
	}
	else if(op=='-')
	{
		res=n1-n2;
		return res;
	}
	else if(op=='*')
	{
		res=n1*n2;
		return res;
	}
	else if(op=='/')
	{
		res=n1/n2;
		return res;
	}
}