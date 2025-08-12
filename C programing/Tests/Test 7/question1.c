#include <stdio.h>
void main()
{
    int arr[5];
    printf("Enter array elements:");
    for (int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    int i1, i2;
    printf("Enter first index positions to swap:");
    scanf("%d",&i1);
    printf("Enter second index positions to swap:");
    scanf("%d",&i2);
    int temp=arr[i1];
    arr[i1]=arr[i2];
    arr[i2]=temp;
    printf("Array after swapping:");
    for (int i=0;i<5;i++)
        printf("%d ",arr[i]);
}
