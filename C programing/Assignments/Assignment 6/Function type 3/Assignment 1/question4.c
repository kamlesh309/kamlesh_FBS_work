#include<stdio.h>
void characters(char);

void main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	
	characters(ch);
}

void characters(char ch)
{	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("%c is vowel",ch);
	}
	else if(ch>='A' && ch<='z')
	{
		printf("%c is consonant",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is a digit",ch);
	}
	else
	{
		printf("%c is a special symbol",ch);
	}
}