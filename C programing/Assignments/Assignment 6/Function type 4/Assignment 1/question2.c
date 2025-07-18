#include<stdio.h>
int pallindrome(int);	//declaration
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
    
	pallindrome(n); 	//function call
	int res=pallindrome(n);
	if(res==1)
	{
		printf("Entered number is pallindrome.\n");
	}
	else
	{
		printf("Entered number is not a pallindrome.");
	}
}//main ends here

int pallindrome(int n)	//function definition
{
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