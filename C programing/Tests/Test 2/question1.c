#include<stdio.h>
void main()
{
	int units,ebill;
	printf("Enter electricity consumption units:");
	scanf("%d",&units);
	if(units>=1 && units<=50)
	{
		ebill=30*units;
		printf("Total Electricity bill=%drs",ebill);
	}
	else if(units>=51 && units<=150)
	{
		ebill=40*units;
		printf("Total Electricity bill=%drs",ebill);
	}
	else if(units>150)
	{
		ebill=50*units;
		printf("Total Electricity bill=%drs",ebill);
	}
}