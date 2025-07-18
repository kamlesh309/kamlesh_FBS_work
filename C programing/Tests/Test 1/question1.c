#include<stdio.h>
void main()
{
	int hr,min,sec,totsec;
	printf("Enter total hours:");
	scanf("%d",&hr);
	printf("Enter total minutes:");
	scanf("%d",&min);
	printf("Enter total seconds:");
	scanf("%d",&sec);
	totsec=hr*60*60+min*60+sec;
	printf("Total entered time in second:%d",totsec);	
}