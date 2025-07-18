#include<stdio.h>
int checkage();
void main()
{
	int res=checkage();
	if(res==1)
	{
		printf("You are child.");
	}
	else if(res==2)
	{
		printf("You are teenager.");
	}
	else if(res==3)
	{
		printf("You are adult.");
	}
	else if(res==4)
	{
		printf("You are Senior.");
	}
}
int checkage()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<12)
	{
		return 1;
	}
	else if(age>=12 && age<=19)
	{
		return 2;
	}
	else if(age>=20 && age<=59)
	{
		return 3;
	}
	else if(age>=60)
	{
		return 4;
	}
}