#include<stdio.h>

void add(int *a, int *b,int *sum)
{
    *sum=*a+*b;
}

int main()
{
    int a,b,sum;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    
    add(&a,&b,&sum);
    
    printf("Sum of %d and %d are %d",a,b,sum);
}
