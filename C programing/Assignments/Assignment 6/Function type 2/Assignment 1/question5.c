#include<stdio.h>
int age();
void main()
{
	int res=age();
	if(res==1)
	{
		printf("you are elligible to vote");		
	}
	else
	{
		printf("you are not elligible to vote");	
	}	
}
int age()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}