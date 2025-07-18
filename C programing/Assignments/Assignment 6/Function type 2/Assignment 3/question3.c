#include<stdio.h>
int add();
void main()
{
	int res=add();
	printf("%d",res);
}
int add()
{
	int i=1,sum=0;
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	return sum;
}