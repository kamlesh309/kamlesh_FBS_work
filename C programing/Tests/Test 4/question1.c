//program to print factors in given range

#include<stdio.h>
void factors(int);
void main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	factors(n);
}
void factors(int n)
{
	for(int i=10;i<=n;i++)
	{
		printf("\nFactors of %d=",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("%d ",j);
			}
		}
	}
}