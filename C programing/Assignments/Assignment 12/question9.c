#include<stdio.h>
#include<string.h>
void displaylarge(char*,char*);
void main()
{
	char str1[100],str2[100];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	displaylarge(str1,str2);
}
void displaylarge(char* str1,char* str2)
{
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if (str1[i]>str2[i])
        {
            printf("Larger string:%s\n",str1);
            return;
        }
        else if (str1[i] < str2[i])
        {
            printf("Larger string:%s\n",str2);
            return;
        }
        i++;
	}
}