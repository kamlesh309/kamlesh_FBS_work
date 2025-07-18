#include<stdio.h>
int cases(char);	//declaration

void main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	int res=cases(ch);	//call
	if(res==1)
	{
		printf("The given character is in uppercase.");
	}
	else
	{
		printf("The given character is in lowercase.");
	}
}

int cases(char ch)	//definition
{
	if(ch>='A' && ch<='Z')
	{
		return 1;
	}
	else if(ch>='a' && ch<='z')
	{
		return 0;
	}
}