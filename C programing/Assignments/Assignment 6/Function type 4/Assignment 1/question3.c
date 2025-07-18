#include<stdio.h>
int year(int);	//func declaration

void main()
{
	int enteryear;
	printf("Enter year:");
	scanf("%d",&enteryear);
	
	int res=year(enteryear);
	if(res==1)
	{
		printf("%d is a leap year",enteryear);	
	}
	else
	{
		printf("%d is not a leap year",enteryear);	
	}	
}

int year(int enteryear)	//definition
{
	if(enteryear%4==0 && enteryear%100!=0 || enteryear%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}