#include<stdio.h>
void pallindrome();
void main()
{
	pallindrome();
}

void pallindrome()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
    int temp=n,rev=0,num;
    while(temp>0)
	{
        num=temp%10;
        rev=rev*10+num;
        temp=temp/10;
    }
	if(n==rev)
	{
		printf("Entered number is pallindrome.\n");
	}
	else
	{
		printf("Entered number is not a pallindrome.");
	}
}