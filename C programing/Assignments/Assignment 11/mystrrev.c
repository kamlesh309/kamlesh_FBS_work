#include<stdio.h>
#include<string.h>
char* mystrrev(char*);
void main()
{
	char str[50];
	printf("Enter string:");
	scanf("%s",str);
	
	char* res=mystrrev(str);
	printf("\nReversed string:%s",res);
}
char* mystrrev(char* str)
{
	int len =strlen(str);	//here if we input kamlesh as string from user, its length will be 7 including null(\o) value
	printf("Length=%d",len);
	int i,j=len-1;			// if we take j=len i.e., i=0 upto i=7 it will scan 8 eight characters it will take null as character
	char temp;				//hence, we take j=len-1 it will consider i=6(len=7-1) as last character 
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	return str;
}