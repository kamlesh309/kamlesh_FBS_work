#include<stdio.h>
int pallindrome();
void main()
{
	int res=pallindrome();
	printf("%d is a pallindrome number",res);
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
    if(rev==n)
    {
        return n;
	}
}
