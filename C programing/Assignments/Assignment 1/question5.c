#include<stdio.h>
void main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are elligible to vote");
	}
	else
	{
		printf("you are not elligible to vote");
	}
}