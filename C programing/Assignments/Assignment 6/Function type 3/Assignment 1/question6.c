#include<stdio.h>
void cases(char);	//declaration

void main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	cases(ch);	//call
}

void cases(char ch)	//definition
{
	if(ch>='A' && ch<='Z')
	{
		printf("The given character is in uppercase.");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("The given character is in lowercase.");
	}
}