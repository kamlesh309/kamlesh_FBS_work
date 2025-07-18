#include<stdio.h>
void sumofrange();
void main()
{
	sumofrange();
}
void sumofrange()
{
	int i=1,n,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}