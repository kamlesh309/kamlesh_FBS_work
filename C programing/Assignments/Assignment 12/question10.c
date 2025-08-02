#include<stdio.h>
#include<string.h>
int pallindrome(char*);
void main()
{
	char str[100];
	printf("Enter string:");
	gets(str);
	int res=pallindrome(str);
	if(res==0)
	{
		printf("The given string is pallindrome.");
	}
	else
	{
		printf("The given string is not pallindrome.");	
	}	
}
int pallindrome(char* str)
{
	int i=0;
	int len=strlen(str);
	int n=len-1;
	while(i<n)
	{
		if(str[i]!=str[n])
		{
			return 1;
		}
		i++;
		n--;
	}
	return 0;
}