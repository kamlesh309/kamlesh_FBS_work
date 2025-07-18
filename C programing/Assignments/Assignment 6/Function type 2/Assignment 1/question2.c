#include<stdio.h>
int pallindrome();
void main()
{
	int res=pallindrome();
	if(res==1)
	{
		printf("Entered number is pallindrome.\n");
	}
	else
	{
		printf("Entered number is not a pallindrome.");
	}
}
int pallindrome()
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
		return 1;
	}
	else
	{
		return 0;
	}
}