#include<stdio.h>
#include<string.h>
char* mystrchr(char*,char);
void main()
{
		char str[30];
		printf("Enter string:");
		scanf("%s",str);
		fflush(stdin);
		char ch;
		printf("Enter character you want to find:");
		scanf("%c",&ch);
		char* res=mystrchr(str,ch);
		printf("%s",res);
}
char* mystrchr(char* str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return &str[i];
		}
		i++;
	}
}