#include<stdio.h>
#include<string.h>
char* removeoddchar(char*);
void main()
{
	char str[20];
	printf("Enter string:");
	gets(str);
	char* res=removeoddchar(str);
	printf("String after removing characters from odd index:%s",res);
}
char* removeoddchar(char* str)
{
	int i=0,j=0;
    while(str[i]!='\0')
	{
        if(i%2==0) 
		{
            str[j]=str[i];  
            j++;
        }
        i++;
    }
    str[j]='\0'; 
    return str;
}