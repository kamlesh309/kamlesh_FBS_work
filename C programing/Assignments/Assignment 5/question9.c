#include<stdio.h>
void main()
{
	int n=5;
	for (int i=1;i<=n;i++)
	{
		printf("* ");
	}
	printf("\n");
	for (int j=1;j<=n-2;j++)
	{
        printf("* ");
        for(int k=1;k<=n-2;k++)
		{
            printf("  ");
		}
		printf("*\n");
	}
	for(int l=1;l<=n;l++)
	{
        printf("* ");
    }
    printf("\n");
}