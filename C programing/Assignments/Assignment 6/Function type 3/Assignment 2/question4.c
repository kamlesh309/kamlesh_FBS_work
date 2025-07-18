#include<stdio.h>
void result(int);

void main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	result(marks);
}

void result(int marks)
{
	if(marks>75)
	{
		printf("Result: Distinction");
	}
	else if(marks>=65 && marks<75)
	{
		printf("Result: First Class");
	}
	else if(marks>=55 && marks<65)
	{
		printf("Result: Second Class");
	}
	else if(marks>=40 && marks<55)
	{
		printf("Result: Pass Class");
	}
	else
	{
		printf("Result: Fail");
	}
}