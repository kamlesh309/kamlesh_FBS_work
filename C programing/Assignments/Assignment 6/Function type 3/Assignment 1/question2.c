#include<stdio.h>
void pallindrome(int);	//declaration
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
    
	pallindrome(n); 	//function call
}//main ends here

void pallindrome(int n)	//function definition
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
		printf("Entered number is pallindrome.\n");
	}
	else
	{
		printf("Entered number is not a pallindrome.");
	}
}