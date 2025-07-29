#include <stdio.h>
#include <string.h>
void main()
{
	char str[]="Kamlesh";
    int len= strlen(str);
    printf("Length=%d",len);
    
    char src[]="Kamlesh";
    char dest[50];
    strcpy(dest,src);
    printf("\nAfter copying Dest=%s",dest);
    
    char str1[]="Kamlesh";
    char dest1[10];
    strncpy(dest1,str1,3);
    printf("\nCopied first 3 characters=%s",dest1);
     
	char str2[20]="Kamlesh";
    char str3[]=" Chavhan";
    strcat(str2,str3);
    printf("\nConcatenated string=%s",str2);
    
	int result = strcmp(str2, str3);
    printf("\nResult of strcmp=%d\n",result);
    
    int result2 = strncmp(str2,str3,3);
    printf("Result of strncmp=%d\n", result2);
    
    char str4[20]="Kamlesh";
    char str5[]="Chavhan";
    strncat(str4,str5,3);
    printf("\nConcatenated first 3 chars=%s",str4);
    
    char str6[]="kamlesh";
    char str7[]="KAMLESH";
    int result3 = strcasecmp(str6,str7);
    printf("\nCase comparision=%d",result3);
    
    int result4=strncasecmp(str6,str7,3);
    printf("\nCase comparision for first 3 characters=%d",result4);
    
    char str8[20]="Kamlesh";
    char *ptr = strchr(str8,'l');
    printf("\nResult=%s",ptr);
    
    char *ptr1 = strrchr(str8,'m');
    printf("\nResult= %s",ptr1);
    
    char str9[]="Kamlesh Chavhan";
    char *ptr2=strstr(str9,"Chavhan");
    printf("\nSubstring:%s",ptr2);
    
    char *dup=strdup(str9);
    printf("\nOriginal=%s & Duplicate=%s",str9,dup);
    
    printf("\nReverse=%s",strrev(str9));
    
    printf("\nUppercase=%s",strupr(str6));
    
    printf("\nLowercase=%s", strlwr(str7));
}