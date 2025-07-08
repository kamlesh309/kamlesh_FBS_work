#include<stdio.h>
void main()
{
	int w,h,perimeter;
	printf("Enter width and height:");
	scanf("%d\n %d",&w,&h);
	perimeter=2*(w+h);
	printf("Perimeter of rectangle=%d",perimeter);
}