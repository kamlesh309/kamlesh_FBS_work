#include<stdio.h>
void cases();
void main()
{
	cases();
}

void cases()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("The given character is in uppercase.");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("The given character is in lowercase.");
	}
}