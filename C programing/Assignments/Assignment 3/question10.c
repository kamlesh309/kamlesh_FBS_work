#include<stdio.h>
void main()
{
	int n=12345,sum;
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