#include<stdio.h>
#include<string.h>
char* mystrupper(char*);
void main()
{
	char str[50];
	printf("Enter string:");
	scanf("%s",str);
	
	char* res=mystrupper(str);
	printf("String in Uppercase:%s",res);
}
char* mystrupper(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	return str;
}