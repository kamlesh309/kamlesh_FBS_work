#include<stdio.h>
#include<string.h>
char* mystrcpy(char*,char*);
void main()
{
	char src[]="Kamlesh";
	printf("Source=%s",src);
	char dest[20]={};	
	char* res=mystrcpy(dest,src);
	printf("\nDestination=%s",res);	
}

char* mystrcpy(char* dest,char* src)
{
	int i=0;
	
//	dest[i]=src[i];		this is for printing only first character of your destination string
// 	i++;

	while(src[i]!='\0')
	{	
		dest[i]=src[i];		//for printing whole src string into destination string
		i++;
	}
	return dest;
}
