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
    if(rev==n)
    {
        printf("%d is a pallindrome number",n);
	}
	else
	{
		printf("%d is not a pallindrome number",n);
	}
}
