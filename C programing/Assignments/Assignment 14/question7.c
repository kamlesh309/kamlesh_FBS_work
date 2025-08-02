#include <stdio.h>
struct time 
{
    int hour,min,sec;
};
struct time storeTime();
void displayTime(struct time);
void main() 
{
    struct time t1, t2;

    printf("Time 1:");
    t1.hour=12;
    t1.min=55;
    t1.sec=44;
    displayTime(t1);
    t2=storeTime();
    displayTime(t2);
}
struct time storeTime() 
{
    struct time t2;
    printf("\nTime 2:");
    printf("\nEnter hour:");
    scanf("%d",&t2.hour);
    printf("Enter minutes:");
    scanf("%d",&t2.min);
    printf("Enter seconds:");
    scanf("%d",&t2.sec);

    int totalSec=t2.hour*3600+t2.min*60+t2.sec;
    t2.hour=totalSec/3600;
    int rem=totalSec%3600;
    t2.min=rem/60;
    t2.sec=rem%60;

    return t2;
}
void displayTime(struct time t) 
{
    printf("\n%d hr:%d min:%d sec",t.hour,t.min,t.sec);
}
