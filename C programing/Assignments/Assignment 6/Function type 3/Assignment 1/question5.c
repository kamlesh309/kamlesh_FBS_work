#include<stdio.h>
void age(int);
void main()
{
	int enterage;
	printf("enter age:");
	scanf("%d",&enterage);
	
	age(enterage);
}

void age(int enterage)
{
	if(enterage>=18)
	{
		printf("you are elligible to vote");
	}
	else
	{
		printf("you are not elligible to vote");
	}
}