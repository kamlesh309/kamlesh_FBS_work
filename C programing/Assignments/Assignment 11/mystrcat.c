#include<stdio.h>
#include<string.h>
char* mystrcat(char*,char*);
void main()
{
	char str[20]="Kamlesh";
	char newstr[]=" Chavhan";	//space is considered as character
	char* res=mystrcat(str,newstr);
	printf("\n%s",res);
	
}

char* mystrcat(char* str,char* newstr)
{
	int len=strlen(str);
	printf("Length=%d",len);
	
	int i=0;

	while(newstr[i]!='\0')
	{	
		str[len]=newstr[i];
		i++;
		len++;
	}
	return str;
}