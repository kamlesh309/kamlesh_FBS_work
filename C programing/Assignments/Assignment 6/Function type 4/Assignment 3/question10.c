#include<stdio.h>
int sumOffdld(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int res=sumOffdld(n);
	printf("Sum of first and last digit = %d", res);
}
int sumOffdld(int n)
{
	int sum;
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