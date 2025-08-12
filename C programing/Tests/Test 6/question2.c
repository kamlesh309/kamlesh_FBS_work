#include <stdio.h>
void main()
{
    int arr[5];
    printf("Enter array elements:");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    printf("Array elements:");
    for(int i=0;i<5;i++)
    	printf("%d ",arr[i]);
    int max=arr[0]; 
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\nFirst max number in array is %d",max);
}
