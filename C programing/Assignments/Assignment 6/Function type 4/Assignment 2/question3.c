//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int greaterthan(int,int,int);
void main()
{
	int n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	int res=greaterthan(n1,n2,n3);
	if(res==1)
	{
		printf("n1 is greater.");
	}
	else if(res==2)
	{
		printf("n2 is greater.");
	}
	else
	{
		printf("n3 is greater.");
	}
}
int greaterthan(int n1, int n2, int n3)
{
	if(n1>n2 && n1>n3)
	{	
		return 1;
	}
	else if(n2>n1 && n2>n3)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}
