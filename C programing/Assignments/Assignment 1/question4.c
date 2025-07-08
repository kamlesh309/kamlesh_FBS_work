#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("character is vowel");
	}
	else if(ch>='A' && ch<='z')
	{
		printf("character is consonant");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("character is a digit");
	}
	else
	{
		printf("character is a special symbol");
	}
}