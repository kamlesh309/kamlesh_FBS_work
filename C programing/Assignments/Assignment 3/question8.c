#include<stdio.h>
void main() 
{ 
	int n=145,temp=n;
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
}