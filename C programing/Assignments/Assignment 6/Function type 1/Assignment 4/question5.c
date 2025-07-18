#include<stdio.h>
void choicefunc();
void main()
{
	choicefunc();	
}
void choicefunc()
{
	int n,choice;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		if(n%2==0)
		{
			printf("%d is even number",n);
		}
		else
		{
			printf("%d is odd number",n);
		}
	}
	else if(choice==2)
	{	
		int flag=0;
		for(int i=2;i<n;i++)
		{	
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d is prime number",n);
		}
		else
		{
			printf("%d is not a prime number",n);
		}
	}
	else if(choice==3)
	{
		int temp=n,rev=0,num;
    	while(temp>0)
		{
     		num=temp%10;
      		rev=rev*10+num;
      		temp=temp/10;
    	}
    	if(rev==n)
    	{
        	printf("%d is a pallindrome number",n);
		}
		else
		{
			printf("%d is not a pallindrome number",n);	
		}
	}
	else if(choice==4)
	{
		if(n>0)
		{
			printf("%d is positive number",n);
		}
		else if(n<0)
		{
			printf("%d is negative number",n);
		}
		else
		{
			printf("%d is zero",n);
		}
	}
	else if(choice==5)
	{
		int rev,rem,sum=0;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		printf("%d is the reverse of entered number",rev);		
	}
	else if(choice==6)
	{
		int rem,sum=0;
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		printf("Sum of all digits in given number=%d",sum);
	}
}