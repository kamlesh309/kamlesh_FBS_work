#include<stdio.h>
void sumOffdld(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	sumOffdld(n);
}
void sumOffdld(int n)
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
	 printf("Sum of first and last digit = %d", sum);
}