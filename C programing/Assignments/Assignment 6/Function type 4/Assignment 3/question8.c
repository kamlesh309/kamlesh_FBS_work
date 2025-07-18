#include<stdio.h>
int strongnum(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int res=strongnum(n);
	if(res==1)
	{
		printf("%d is a Strong Number",n);
	}
	else
	{
		printf("%d is not a Strong Number",n);
	}	
}
int strongnum(int n)
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
	    return 1;
	}
	else
	{
		return 0;
	}
}