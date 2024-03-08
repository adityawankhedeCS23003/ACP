#include <stdio.h>

void array(int ptr[], int size)
{
    int i, j, temp;
    //selection sort
    for (i = 0; i < size; i++)
    {
            for (j = i+1; j < size; j++)
            {
                if (ptr[i] > ptr[j])
                {
                    temp = ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j] = temp;
                }
            }
    }
}

void main()
{
    int arr[5], i;
    printf("Enter the elements of array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    array(arr, 5);
    printf("\nSorted array\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }   
}
