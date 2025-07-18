#include<stdio.h>
char characters();
void main()
{
	int res=characters();
	if(res==1)
	{
		printf("character is vowel");
	}
	else if(res==2)
	{
		printf("character is consonant");
	}
	else if(res==3)
	{
		printf("character is a digit");
	}
	else if(res==4)
	{
		printf("character is a special symbol");
	}
}
char characters()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		return 1;
	}
	else if(ch>='A' && ch<='z')
	{
		return 2;
	}
	else if(ch>='0' && ch<='9')
	{
		return 3;
	}
	else
	{
		return 4;
	}
}