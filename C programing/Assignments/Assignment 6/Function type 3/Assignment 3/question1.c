#include<stdio.h>
void range(int);	//declaration

void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	range(n);	//call
}	//main ends here

void range(int n)	//definition
{
	int i=1;
	while(i<=n)
	{
		printf("%d ", i);
		i++;
	}
	
}