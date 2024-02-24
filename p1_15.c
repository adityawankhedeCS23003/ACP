#include<stdio.h>

void displayarray(int *ptr,int size){
    int i;
    printf("array\n");
    for (i = 0; i < 5; i++)
    {
            printf("%d ",*(ptr+i)); //ptr[i]=*(ptr+i)
    }    
}

void main()
{
    int arr[5],i;
    printf("Enter the elements of array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    displayarray(arr,5);
}