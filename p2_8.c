#include<stdio.h>
#include<stdlib.h>

int add(int *a, int *b)
{
    int sum=0;
    return sum=*a+*b;    
}

int main()
{
    int a=50,b=100,sum;
    sum=add(&a,&b);
    printf("Sum of %d and %d are %d",a,b,sum);
}
