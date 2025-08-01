#include<stdio.h>
#include<string.h>
int mystrcasecmp(char*,char*);
void main()
{
	char str1[20];
	printf("Enter string 1:");
	scanf("%s",str1);
	char str2[20];
	printf("Enter string 2:");
	scanf("%s",str2);
	
	int res=mystrcasecmp(str1,str2);
	printf("\n%d",res);
}

int mystrcasecmp(char* str1,char* str2)
{
	int i=0;

	while(str1[i]!='\0' && str2[i]!='\0')
    {
    	if (str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
        if (str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]=str2[i]+32;
        }
        if (str1[i]!=str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
	}
	return str1[i]-str2[i];
}