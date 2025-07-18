#include<stdio.h>
void strongnum();
void main()
{
	strongnum();	
} 
void strongnum()
{ 
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int temp=n,num,sum=0,fact=1;
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