#include<stdio.h>
void main()
{
	int n=121;
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
}
