#include<stdio.h>
void deposit(float*);
void withdraw(float*);
void main()
{
	float balance;
	printf("Enter balance:");
	scanf("%f",&balance);
	int choice;
	printf("Enter 1 to deposit or 2 to withdraw:");
	scanf("%d",&choice);
	if(choice==1)
	{
		deposit(&balance);
	}
	else if(choice==2)
	{
		withdraw(&balance);
	}
}
void deposit(float* balance)
{
	int dep,nb=0;
	printf("Enter amount you want to deposit:");
	scanf("%d",&dep);
	nb=dep+(*balance);
	printf("\nTotal amount after deposit:Rs. %d",nb);
}
void withdraw(float* balance)
{
	int withdraw;
	printf("\nEnter amount you want to withdraw:");
	scanf("%d",&withdraw);
	if(*balance<3000)
	{
		printf("\nCannot withdraw amount.\nMinimum balance Rs.3000 required.");
	}
	else
	{
		int rem=*balance-withdraw;
		printf("\nRemaining balance after Rs. %d withdrawal is Rs. %d",withdraw,rem);
		
	}
}
