#include<stdio.h>
int characters(char);

void main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	
	int res=characters(ch);
	if(res==1)
	{
		printf("%c is a vowel", ch);
	}
	else if(res==2)
	{
		printf("%c is consonant",ch);
	}
	else if(res==3)
	{
		printf("%c is a digit",ch);
	}
	else
	{
		printf("%c is a special symbol",ch);
	}
}

int characters(char ch)
{	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
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