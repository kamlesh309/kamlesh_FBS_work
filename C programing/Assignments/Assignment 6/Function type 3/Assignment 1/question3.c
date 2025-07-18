#include<stdio.h>
void year(int);	//func declaration

void main()
{
	int enteryear;
	printf("Enter year:");
	scanf("%d",&enteryear);
	
	year(enteryear);	//call
}

void year(int enteryear)	//definition
{
	if(enteryear%4==0 && enteryear%100!=0 || enteryear%400==0)
	{
		printf("%d is a leap year",enteryear);
	}
	else
	{
		printf("%d is not a leap year",enteryear);
	}
}