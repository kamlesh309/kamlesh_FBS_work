//program to find a power of number

#include<stdio.h>
void main()
{
	int n,power,result=1,count=0;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter power:");
	scanf("%d",&power);
	while(count<power)
	{
        result=result*n;
        count++;
    }
	printf("Power of %d raise to power %d is %d\n",n,power,result);

}