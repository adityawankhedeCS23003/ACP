#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);

    printf("Before swap\n");
    printf("1st number %d\n", a);
    printf("2nd number %d\n", b);
  
    swap(&a, &b);
  
    printf("After swap\n");
    printf("1st number %d\n", a);
    printf("2nd number %d\n", b);

    return 0;
}
