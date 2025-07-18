#include<stdio.h>
int pallindrome(int);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int res=pallindrome(n);
	if(res==1)
	{
		printf("%d is a pallindrome number",n);
	}
	else
	{
		printf("%d is a not pallindrome number",n);
	}
}
int pallindrome(int n)
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
        return 1;
	}
	else
	{
		return 0;
	}
}
