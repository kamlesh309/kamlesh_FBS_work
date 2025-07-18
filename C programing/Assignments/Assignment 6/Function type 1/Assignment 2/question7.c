#include<stdio.h>
void checkage();
void main()
{
	checkage();
}
void checkage()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<12)
	{
		printf("You are child.");
	}
	else if(age>=12 && age<=19)
	{
		printf("You are teenager.");
	}
	else if(age>=20 && age<=59)
	{
		printf("You are adult.");
	}
	else if(age>=60)
	{
		printf("You are Senior.");
	}
}