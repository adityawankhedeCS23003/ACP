#include <stdio.h>
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
    printf("original array\n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReversed array\n");
    for (i = num-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}
