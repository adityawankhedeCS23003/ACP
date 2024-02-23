#include<stdio.h>

int main()
{
    int n,i,j,sum=0,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("ENter elements for the array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //Used bubble sort
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    int second_max=arr[n-2];
    printf("second largest element in array is %d",second_max);

    return 0;
}
    