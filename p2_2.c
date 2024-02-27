#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i,n;
    float avg,sum;
    printf("Enter the no of elements for array ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int)); //dynamic memory allocation
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d", (ptr+i));
       sum+=*(ptr+i);
    }
    printf("Elements of array\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));
    }
    avg=sum/n;
    printf("\nAverage of elements in the array is %.2f\n",avg);
    free(ptr);
    return 0;
}
