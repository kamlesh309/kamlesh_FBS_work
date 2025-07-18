#include<stdio.h>
void rate(float*,char*);	//declaration

void main()
{
	float price;
	char choice;
	printf("Enter price:");
	scanf("%f",&price);
	fflush(stdin);
	printf("Enter choice y or n:");
	scanf("%c",&choice);
	
	rate(&price,&choice);		//call
}

void rate(float* price,char* choice)	//definition
{
	float discount;
	if(*choice=='y')
	{             
		if(*price>500)
		{
			discount=*price-*price*0.20;
			printf("Total price after deducting discount:Rs. %f",discount);
		}
		else
		{
			discount=*price-*price*0.10;
			printf("Total price after deducting discount:Rs. %f",discount);
		}
	}
	else if(*choice=='n')
	{
		if(*price>600)
		{
			discount=*price-*price*0.15;
			printf("Total price after deducting discount:Rs. %f",discount);
		}
		else
		{
			discount=*price;
			printf("Total price:Rs. %f",discount);
		}
	}
}