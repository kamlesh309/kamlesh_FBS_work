#include<stdio.h>
int sumOffdld();
void main()
{
	int res=sumOffdld();
	printf("Sum of first and last digit = %d",res);
}
int sumOffdld()
{
	int n,sum;
	printf("Enter number:");
	scanf("%d",&n);
	int fd,ld;
	ld=n%10;
	fd=n;
	while(fd>=10)
	{
		fd=fd/10;
	}
	sum=fd+ld;
	return sum;
}