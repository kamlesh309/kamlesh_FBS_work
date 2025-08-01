#include<stdio.h>
#include<string.h>
char* mystrstr(char*,char*);
void main()
{
	int i=0;
	char str[30];
	printf("Enter string:");
	scanf("%s",str);
	char substr[10];
	printf("Enter a letter you want to search:");
	scanf("%s",substr);
	char* res=mystrstr(str,substr);
	printf("\nWord found at index i=%d",res);
}
char* mystrstr(char* str, char* substr)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==substr)
		{
			return &str[i];
		}
		i++;
	}
}