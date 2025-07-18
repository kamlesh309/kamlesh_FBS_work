#include<stdio.h>
void main()
{
	int n=5,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
            printf("* ");
        }
		printf("\n");
	}
}