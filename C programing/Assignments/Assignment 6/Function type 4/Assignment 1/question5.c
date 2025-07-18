#include<stdio.h>
int age();
void main()
{
	int enterage;
	printf("enter age:");
	scanf("%d",&enterage);
	
	int res=age(enterage);
	if(res==1)
	{
		printf("you are elligible to vote");
	}
	else
	{
		printf("you are not elligible to vote");
	}
}

int age(int enterage)
{
	if(enterage>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}