#include<stdio.h>
void perfectnum(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	perfectnum(n);
}
void perfectnum(int n)
{
	int i,j,sum;
	for(i=1;i<=n;i++)
	{
		sum=0;
        for(j=1;j<i;j++) 
		{					
            if(i%j==0) 
			{
                sum=sum+j;
            }
        }
        if(sum==i) 
		{
            printf("%d is the perfect number between 1 to %d \n",i,n);
        }
    }
}