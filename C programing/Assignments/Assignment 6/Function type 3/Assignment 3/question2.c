#include<stdio.h>
void table(int);

void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	table(n);
}
void table(int n)
{
	int i=1,table;
	while(i<=10)
	{
		table=i*n;
		printf("%d ",table);
		i++;
	}
}