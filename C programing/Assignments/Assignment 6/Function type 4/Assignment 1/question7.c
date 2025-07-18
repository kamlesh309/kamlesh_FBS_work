#include<stdio.h>
float salary(float);
void main()
{
	float basic;
	printf("Enter basic salary:Rs. ");
	scanf("%f",&basic);
	float res=salary(basic);
		printf("Your total salary is:Rs. %f",res);
}
float salary(float basic)
{
	float totalsalary,da,ta,hra;
	if(basic<=5000)
	{
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
		totalsalary=basic+da+ta+hra;
		return totalsalary;
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
		totalsalary=basic+da+ta+hra;
		return totalsalary;
	}
}