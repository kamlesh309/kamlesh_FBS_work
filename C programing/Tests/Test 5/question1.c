#include<stdio.h>
void sell(float price);
void main()
{
    float price;
    printf("Enter price:");
    scanf("%f",&price);
    sell(price);
}
void sell(float price)
{
    float sellingprice;
    if(price>=100 && price<500)
    {
    	float dis=10;
    	dis=dis/100;
    	sellingprice=price-(price*dis);
    	printf("\nSelling price after applying discount=Rs. %f",sellingprice);
	}
	else if(price>=500 && price<1000)
	{
		float dis=15;
    	dis=dis/100;
    	sellingprice=price-(price*dis);
    	printf("\nSelling price after applying discount=Rs. %f",sellingprice);
	}
	else if(price>=1000)
	{
		float dis=20;
    	dis=dis/100;
    	sellingprice=price-(price*dis);
    	printf("\nSelling price after applying discount=Rs. %f",sellingprice);
	} 
	else
	{
		sellingprice=price;
		printf("\nSelling price=Rs. %f",sellingprice);		
    }      
}
