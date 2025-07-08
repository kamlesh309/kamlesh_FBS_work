#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5,total,average;
	printf("Enter five numbers:");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	total=n1+n2+n3+n4+n5;
	printf("Total=%d \n",total);
	average=total/3;
	printf("Average=%d",average);
}