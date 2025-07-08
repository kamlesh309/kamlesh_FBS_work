#include<stdio.h>
void main()
{
	int n;
	int q1,q2,q3,q4,q5,r1,r2,r3,r4,r5,rev;
	printf("Enter five digit number:");
	scanf("%d",&n);
	q1=n%10;
	r1=n/10;
	q2=r1%10;
	r2=r1/10;
	q3=r2%10;
	r3=r2/10;
	q4=r3%10;
	r4=r3/10;
	q5=r4%10;
	r5=r4/10;
	//printf("%d%d%d%d%d",q1,q2,q3,q4,q5);
	rev=q1*10000+q2*1000+q3*100+q4*10+q5;
	printf("\nReverse of entered number is %d \n",rev);
	if(n==rev)
	{
		printf("Entered number is pallindrome.\n");
	}
	else
	{
		printf("Entered number is not a pallindrome.");
	}
}