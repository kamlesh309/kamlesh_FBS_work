#include<stdio.h>
#include<string.h>
int countwords(char*);
void main()
{
	char str[100];
	printf("Enter string:");
	gets(str);
	int res=countwords(str);
	if(res>=1)
	{
		printf("No. of words in string:%d",res);
	}
	else
	{
		printf("String has only one word");
	}
}
int countwords(char* str)
{
	int i=0,count=1;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			count++;
		}
		i++;
	}
	return count;
}