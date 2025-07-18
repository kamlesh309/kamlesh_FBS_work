//1. Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void armstrongrange();
void main()
{
	armstrongrange();
}
void armstrongrange()
{
	int n,j=1;
	printf("Enter number:");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		int temp=j,rem,count=0,sum=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;		
		}
		temp=j;
		while(temp>0)
		{	
			rem = temp % 10;
			int res=1;
			for(int i=1;i<=count;i++)
			{
				res=res*rem;
			}
			sum=sum+res;
			temp = temp / 10;
		}
		if(sum==j)
		{
			printf("\n %d",sum);
		}
	}
}