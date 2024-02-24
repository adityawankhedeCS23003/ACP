#include<stdio.h>

int main()
{
    int i,arr[10],arr1[5],arr2[5];
    
    printf("Enter elements of array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nOriginal array\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    for ( i = 0; i < 10; i++)
    {
        arr1[i]=arr[i];
        arr2[i]=arr[i+5];   
    }
    
    printf("\n1st array\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n2nd array\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}