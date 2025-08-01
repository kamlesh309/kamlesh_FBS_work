#include<stdio.h>
#include<string.h>
char* mystrlower(char*);
void main()
{
	char str[50];
	printf("Enter string:");
	scanf("%s",str);
	
	char* res=mystrlower(str);
	printf("String in Lowercase:%s",res);
}
char* mystrlower(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		i++;
	}
	return str;
}