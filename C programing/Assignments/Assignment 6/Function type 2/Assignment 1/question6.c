#include<stdio.h>
char cases();
void main()
{
	int res=cases();
	if(res==1)
	{
		printf("The given character is in uppercase.");
	}
	else
	{
		printf("The given character is in lowercase.");
	}
}
char cases()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		return 1;
	}
	else if(ch>='a' && ch<='z')
	{
		return 0;
	}
}