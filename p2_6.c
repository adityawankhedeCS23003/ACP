#include<stdio.h>

void main()
{
    int b[5],i;
    printf("Enter the elements for the array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    int (*a)[5]=&b;
    printf("Array\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",*(*a+i));
    }
    
}
