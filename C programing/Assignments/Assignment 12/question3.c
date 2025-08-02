#include<stdio.h>
#include<string.h>
char* deletechar(char*,int);
void main()
{
	char str[20];
	printf("Enter string:");
	scanf("%s",str);
	int n;
	printf("Enter index number you want to delete:");
	scanf("%d",&n);
	char* res=deletechar(str,n);	
	printf("String after deleting character:%s",res);
}
char* deletechar(char* str,int n)
{
    int i;
    for(i=n;str[i]!='\0';i++)
	{
        str[i]=str[i+1];  
    }
    return str;
}

