#include<stdio.h>
void characters();
void main()
{
	characters();
}

void characters()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
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