#include<stdio.h>
void main()
{
	int n=4;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int l=n-1;l>=1;l--)
	{
		for(int m=1;m<=n-l;m++)
		{
			printf(" ");
		}
		for (int n=1;n<=l;n++)
		{
			printf("* ");
		}
		printf("\n");	
	}
}