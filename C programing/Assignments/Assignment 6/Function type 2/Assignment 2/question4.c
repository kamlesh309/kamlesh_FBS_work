#include<stdio.h>
int result();
void main()
{
	int res=result();
	if(res==1)
	{
		printf("Result: Distinction");
	}
	else if(res==2)
	{
		printf("Result: First Class");
	}
	else if(res==3)
	{
		printf("Result: Second Class");
	}
	else if(res==4)
	{
		printf("Result: Pass Class");
	}
	else
	{
		printf("Result: Fail");
	}
}
int result()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	if(marks>75)
	{
		return 1;
	}
	else if(marks>=65 && marks<75)
	{
		return 2;
	}
	else if(marks>=55 && marks<65)
	{
		return 3;
	}
	else if(marks>=40 && marks<55)
	{
		return 4;
	}
	else
	{
		return 5;
	}
}