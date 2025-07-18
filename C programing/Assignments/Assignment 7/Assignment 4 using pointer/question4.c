#include<stdio.h>
void strongnum(int*);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	strongnum(&n);
}
void strongnum(int* n)
{
	int i,temp;
	for(int i=1;i<=*n;i++)
	{
		temp=i;
		int num,sum=0;
		while(temp>0) 
		{
			int fact=1;
            num=temp%10;
            for(int j=1;j<=num;j++) 
			{
                fact=fact*j;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==i) 
		{
            printf("%d is the strong number between 1 to %d\n",i,*n);
        }
    }
}