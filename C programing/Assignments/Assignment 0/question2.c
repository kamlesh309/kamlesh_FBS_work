#include<stdio.h>
void main()
{
	float pi,r,area;
	printf("enter pi:");
	scanf("%f",&pi);
	printf("enter r:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area of circle=%f",area);
}