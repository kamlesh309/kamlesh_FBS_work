#include<stdio.h>
#include<string.h>
int countvowel(char*);
void main()
{
	char str[20];
	printf("Enter string:");
	scanf("%s",str);
	int res=countvowel(str);
	if(res>0)
	{
		printf("No. of vowels in string:%d",res);
	}
	else
	{
		printf("No vowel in this string");
	}
}
int countvowel(char* str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			count++;
		}
		i++;
	}
	return count;
}