#include<stdio.h>
#include<string.h>
struct Date
{
	int date,month,year;
};

struct Date storeDate();	//function declared
void displayDate(struct Date);			//function declared

void main()					//main starts here
{
	struct Date d1,d2,d3;	
	d1=storeDate();
	displayDate(d1);
	printf("\n");
	d2=storeDate();
	displayDate(d2);
	printf("\n");
	d3=storeDate();
	displayDate(d3);
}							//main ends here

struct Date storeDate()
{
	struct Date temp;
	printf("\nEnter date-");
	scanf("%d",&temp.date);
	printf("Enter month-");
	scanf("%d",&temp.month);
	if(temp.month>12)
	{	
		printf("\nInvalid month");
		temp.month=1;		//if user enter value for month greater than 12 it will assigned a value temp.month=1
	}
	printf("Enter year-");
	scanf("%d",&temp.year);
	return temp;
}
void displayDate(struct Date temp)
{
	printf("\nDate:");
	printf("\n%d|%d|%d",temp.date,temp.month,temp.year);
}	
	
