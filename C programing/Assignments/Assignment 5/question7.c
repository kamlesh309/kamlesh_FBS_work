#include<stdio.h>
void main()
{
	int n=4,digits=1;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=i;j++)
		{
            printf("%d ",digits);
            digits++;
        }
        printf("\n");
    }
}