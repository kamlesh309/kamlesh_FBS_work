#include<stdio.h>
void main()
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