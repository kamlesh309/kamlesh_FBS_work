#include<stdio.h>
void sumofseries(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	sumofseries(n);
}
void sumofseries(int n)
{
	int i=1,sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}