#include<stdio.h>
void pallindrome(int*);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	pallindrome(&n);
}
void pallindrome(int* n)
{
    int temp=*n,rev=0,num;
    while(temp>0)
	{
        num=temp%10;
        rev=rev*10+num;
        temp=temp/10;
    }
    if(rev==*n)
    {
        printf("%d is a pallindrome number",*n);
	}
	else
	{
		printf("%d is a not pallindrome number",*n);
	}
}
