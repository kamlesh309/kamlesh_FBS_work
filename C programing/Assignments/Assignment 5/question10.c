#include<stdio.h>
void main()
{
	int n=5,star=1;
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
			{
				printf("* ");
			}
			else
			{
				if(i==star && j==star)
				{
					printf("* ");
				}
				else 
				{
					printf("  ");
				}
			}
		}
		star++;
		printf("\n");
	}
}