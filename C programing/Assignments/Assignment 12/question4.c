#include<stdio.h>
#include<string.h>
char* exchangechar(char*);
void main()
{
	char str[20];
	printf("Enter string:");
	scanf("%s",str);
	char* res=exchangechar(str);
	printf("\nString after exchanging first and last character:%s",res);
}
char* exchangechar(char* str)
{
	int len=strlen(str);
	if(len>1)
	{
        char temp=str[0];
        str[0]=str[len-1];
        str[len-1]=temp;
    }
    return str;
}
