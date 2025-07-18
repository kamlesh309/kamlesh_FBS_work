#include<stdio.h>
void strongnum(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	strongnum(n);	
}
void strongnum(int n)
{ 
	int temp=n;
    int num,fact,sum=0;
    while(temp>0) 
	{
        num=temp%10;
        fact=1;
        for(int i=1;i<=num;i++)
		{
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
    {
	    printf("%d is a Strong Number",n);
	}
	else
	{
		printf("%d is not a Strong Number",n);
	}
}