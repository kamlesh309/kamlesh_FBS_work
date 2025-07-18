#include<stdio.h>
void sumOffdld();
void main()
{
	sumOffdld();
}
void sumOffdld()
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
	 printf("Sum of first and last digit = %d", sum);
}