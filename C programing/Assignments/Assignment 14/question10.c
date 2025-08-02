#include<stdio.h>
#include<string.h>
struct product
{
	int id;
	char name[50];
	int quantity;
	int price;	
};
struct product storeProduct();
void displayProduct(struct product);
void main()
{
	struct product pro1,pro2;
	
	pro1.id=101;
	strcpy(pro1.name,"Bucket");
	pro1.quantity=55000;
	pro1.price=1500;	
	displayProduct(pro1);
	pro2=storeProduct();
	displayProduct(pro2);
}
struct product storeProduct()
{
	struct product pro2;
	printf("\n\nEnter product id:");
	scanf("%d",&pro2.id);
	fflush(stdin);
	printf("Enter product name:");
	gets(pro2.name);
	printf("Enter product quantity:");
	scanf("%d",&pro2.quantity);
	printf("Enter product price:");
	scanf("%d",&pro2.price);
	return pro2;
}
void displayProduct(struct product pro)
{
	printf("\nProduct Details:");
	printf("\nProduct id-%d",pro.id);
	printf("\nProduct name-%s",pro.name);
	printf("\nProduct quantity-%d",pro.quantity);
	printf("\nProduct price-Rs.%d",pro.price);
}