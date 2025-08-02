#include<stdio.h>
#include<string.h>
char* replace(char*);
void main()
{
	char str[20];
	printf("Enter string:");
	scanf("%s",str);
	char* res=replace(str);	
	printf("String after replacing:%s",res);
}
char* replace(char* str)
{
	int i;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
		i++;
	}
	return str;
}