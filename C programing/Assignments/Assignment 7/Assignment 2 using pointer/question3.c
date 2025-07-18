//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void greaterthan(int*,int*,int*);
void main()
{
	int n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	greaterthan(&n1,&n2,&n3);
}
void greaterthan(int* n1, int* n2, int* n3)
{
	if(*n1>*n2)
	{	
		if(*n1>*n3)
		{
			printf("n1 is greater.");
		}
		else
		{
			printf("n3 is greater.");
		}
	}
	else if(*n2>*n1)
	{
		if(*n2>*n3)
		{
			printf("n2 is greater.");
		}
		else
		{
			printf("n3 is greater.");
		}
	}
	else
	{
		printf("n3 is greater.");
	}
}
