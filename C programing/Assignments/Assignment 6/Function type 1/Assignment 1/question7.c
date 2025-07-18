#include<stdio.h>
void salary();
void main()
{
	salary();
}

void salary()
{
	float totalsalary,basic,da,ta,hra;
	printf("Enter basic salary:Rs. ");
	scanf("%f",&basic);
	if(basic<=5000)
	{
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
		totalsalary=basic+da+ta+hra;
		printf("Your total salary is:Rs. %f",totalsalary);
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
		totalsalary=basic+da+ta+hra;
		printf("Your total salary is:Rs. %f",totalsalary);
	}
}