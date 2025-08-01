#include<stdio.h>
#include<string.h>
int mystrcmp(char*,char*);
void main()
{
	char str1[20];
	printf("Enter string 1:");
	scanf("%s",str1);
	char str2[20];
	printf("Enter string 2:");
	scanf("%s",str2);
	
	int res=mystrcmp(str1,str2);
	printf("\n%d",res);	
}

int mystrcmp(char* str1,char* str2)
{
    int i=0;

    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
        i++;
    }
    return str1[i]-str2[i];
}
