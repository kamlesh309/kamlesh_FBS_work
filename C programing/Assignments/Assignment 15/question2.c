#include<stdio.h>
#include<string.h>
struct Time
{
	int hr,min,sec;
};
void storetime(struct Time t1,struct Time t2);
void calculatetime(struct Time t1,struct Time t2);
void main()
{
	struct Time t1,t2;
	storetime(t1,t2);
	calculatetime(t1,t2);
}
void storetime(struct Time t1,struct Time t2)
{
	printf("Time 1:");
	printf("\nEnter hour:");
	scanf("%d",&t1.hr);
	printf("Enter minutes:");
	scanf("%d",&t1.min);
	printf("Enter seconds:");
	scanf("%d",&t1.sec);
	printf("\nTime 2:");
	printf("\nEnter hour:");
	scanf("%d",&t2.hr);
	printf("Enter minutes:");
	scanf("%d",&t2.min);
	printf("Enter seconds:");
	scanf("%d",&t2.sec);
}
void calculatetime(struct Time t1,struct Time t2)
{
	int totalhr=t1.hr+t2.hr;
	int totalmin=t1.min+t2.min;
	int totalsec=t1.sec+t2.sec;
	printf("\nTotal time after both timings is %d hr:%d min:%d sec",totalhr,totalmin,totalsec);
	int totaltime=totalhr*3600+totalmin*60+totalsec;
	int hr=totaltime/3600;
	int rem=totaltime%3600;
	int min=rem/60;
	int sec=rem%60;
	printf("Total time is %d hr:%d min:%d sec",hr,min,sec);
}
