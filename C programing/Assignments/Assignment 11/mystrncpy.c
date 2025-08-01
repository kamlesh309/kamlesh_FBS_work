#include<stdio.h>
#include<string.h>
char* mystrncpy(char*,char*,int);
void main()
{
	char str1[20];
	char str2[20];
	printf("Enter string 2:");
	scanf("%s",str2);
	int n;
	printf("Enter the number you want to copy:");
	scanf("%d",&n);
	if(strlen(str2)<n)
	{
		printf("Invalid Input");
	}
	else
	{
		char* res=mystrncpy(str1,str2,n);
		printf("\n%s",res);		
	}	
}

char* mystrncpy(char* str1,char* str2,int n)
{
	
    int i=0;
    while(i<n)
    {
    	str1[i]=str2[i];
    	i++;
	}	
	return str1;
}
