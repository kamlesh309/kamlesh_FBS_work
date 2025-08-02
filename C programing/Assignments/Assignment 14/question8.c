#include<stdio.h>
#include<string.h>

struct distance 
{
    float feet,inch;	
};

struct distance storeDistance();
void displayDistance(struct distance);

void main() 
{
    struct distance d1,d2;
    
    printf("Distance 1:");
    d1.feet=5;
    d1.inch=11;
    displayDistance(d1);
    
    d2=storeDistance();
    displayDistance(d2);
}

struct distance storeDistance() 
{
    struct distance d2;
    printf("\n\nDistance 2:");
    printf("\nEnter feet:");
    scanf("%f",&d2.feet);
    printf("Enter inch:");
    scanf("%f",&d2.inch);
    return d2;
}

void displayDistance(struct distance d) 
{
    printf("\nTotal distance=%f feet %f inch",d.feet,d.inch);
}
