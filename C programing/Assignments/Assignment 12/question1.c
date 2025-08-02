#include<stdio.h>
#include<string.h>
int scansearch(char*,char);
void main()
{
	char str[20];
	printf("Enter string:");
	scanf("%s",str);
	fflush(stdin);
	char ch;
	printf("Enter character you want to search:");
	scanf("%c",&ch);
	int res=scansearch(str,ch);
	if(res==0)
	{
		printf("Character not found");
	}
	else
	{
		printf("Character found at index i=%d",res);
	}
}
int scansearch(char* str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return i;
		}
		i++;
	}
	return 0;
}