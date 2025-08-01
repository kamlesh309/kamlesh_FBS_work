#include <stdio.h>
#include <string.h>
int mystrncasecmp(char*,char*,int);
void main()
{
    char str1[50];
    printf("Enter string 1:");
    scanf("%s",str1);
    char str2[50];
    printf("Enter string 2:");
    scanf("%s",str2);

    int n;
    printf("Enter number of characters to compare:");
    scanf("%d",&n);
    int res=mystrncasecmp(str1,str2,n);
    printf("\n%d",res);
}

int mystrncasecmp(char* str1,char* str2,int n)
{
	int i=0;
	while(i<n)
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
        else
        {
            return str1[i] - str2[i];
        }
        i++;
	}
}