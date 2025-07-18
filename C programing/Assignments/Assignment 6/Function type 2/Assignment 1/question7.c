#include<stdio.h>
float salary();
void main()
{
	float res=salary();
	printf("Your total salary is %f",res);	
}
float salary()
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
	//	printf("Your total salary is:Rs. %f",totalsalary);
		return totalsalary;
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
		totalsalary=basic+da+ta+hra;
		//printf("Your total salary is:Rs. %f",totalsalary);
		return totalsalary;
	}
}