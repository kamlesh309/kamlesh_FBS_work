#include<stdio.h>
void main()
{
	int i,n=25;
	printf("Odd numbers from 10 to 25 = ");
	for(i=10;i<=n;i++)
	{
		if(i%2!=0)
		{ 
			printf("%d ",i);
		}
	}
	printf("\nEven numbers from 1 to 25 = ");	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}

}