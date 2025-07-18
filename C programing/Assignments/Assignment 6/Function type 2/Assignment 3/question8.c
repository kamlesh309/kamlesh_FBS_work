#include<stdio.h>
int strongnum();
void main() 
{
	int res=strongnum();
	printf("%d is a Strong Number",res);
}
int strongnum()
{ 
	int n,temp=n;
	printf("Enter number:");
	scanf("%d",&n);
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
	    return n;
	}
}