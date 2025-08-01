#include<stdio.h>
#include<string.h>
int mystrlen(char*);
void main()
{
	char src[]="Kamlesh";
	printf("Source=%s",src);
	
	int res=mystrlen(src);
	printf("\nLength=%d",res);	
}

int mystrlen(char* src)
{
	int i=0;

	while(src[i]!='\0')
	{	
		i++;
	}	
	return i;
}
