#include<stdio.h>
#include<string.h>
char* replace(char*);
void main()
{
	char str[20];
	printf("Enter string:");
	gets(str);
	char* res=replace(str);
	printf("New string:%s",res);
}
char* replace(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]='$';
		}
		i++;
	}
	return str;
}