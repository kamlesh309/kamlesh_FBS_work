#include<stdio.h>
void main()
{
	int  min,hr,minutes;
	printf("Enter min:");
	scanf("%d",&min);
	hr=min/60;
	minutes=min%60;
	printf("Minutes:%d = %d hr and %d minutes",min,hr,minutes);

}