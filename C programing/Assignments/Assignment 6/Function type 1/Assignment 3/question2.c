#include<stdio.h>
void table();
void main()
{
	table();
}
void table()
{
	int i=1,n,table;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=10)
	{
		table=i*n;
		printf("%d ",table);
		i++;
	}
}