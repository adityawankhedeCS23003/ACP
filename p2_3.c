#include <stdio.h>

void reverse(int *ptr,int n){
    int temp,*start,*end;
    start=ptr;
    end=ptr+n-1;
    while (start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}



void main()
{
    int num, i;
    printf("Enter the no of elements: ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i <num; i++)
    {
        printf("%d element of array: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\noriginal array\n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }   
    
    reverse(arr,num);

    printf("\nreverse array\n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}
