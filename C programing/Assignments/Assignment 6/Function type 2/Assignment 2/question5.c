#include<stdio.h>
int rate();
void main()
{
	int res=rate();
	printf("%d",res);
}
int rate()
{
	float price,discount;
	char choice;
	printf("Enter price:");
	scanf("%f",&price);
	fflush(stdin);
	printf("Enter choice:");
	scanf("%c",&choice);
	if(choice=='y')
	{             
		if(price>500)
		{
			discount=price-price*0.20;
			printf("Total price after deducting discount:Rs. ",discount);
			return discount;
		}
		else
		{
			discount=price-price*0.10;
			printf("Total price after deducting discount:Rs. ",discount);
			return discount;
		}
	}
	else if(choice=='n')
	{
		if(price>600)
		{
			discount=price-price*0.15;
			printf("Total price after deducting discount:Rs. ",discount);
			return discount;
		}
		else
		{
			discount=price;
			printf("Total price:Rs. ",discount);
			return discount;
		}
	}
}