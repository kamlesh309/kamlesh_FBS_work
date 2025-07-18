#include<stdio.h>
float rate(float,char);	//declaration

void main()
{
	float price;
	char choice;
	printf("Enter price:");
	scanf("%f",&price);
	fflush(stdin);
	printf("Enter choice y or n:");
	scanf("%c",&choice);
	
	float res=rate(price,choice);		//call
	printf("Total price after deducting discount:Rs. %f",res);
}

float rate(float price,char choice)	//definition
{
	float discount;
	if(choice=='y')
	{             
		if(price>500)
		{
			discount=price-price*0.20;
			return discount;
		}
		else
		{
			discount=price-price*0.10;
			return discount;
		}
	}
	else if(choice=='n')
	{
		if(price>600)
		{
			discount=price-price*0.15;
			return discount;
		}
		else
		{
			discount=price;
			return discount;
		}
	}
}