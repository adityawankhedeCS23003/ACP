#include <stdio.h>
#include <stdlib.h>

void fact(int n, int *p)
{
    int i;
    *p=1;
    for (i = 1; i <= n; i++)
    {
        *p*=i;
    }    
}

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        int org=num;
        fact(num, &num);
        printf("Factorial of %d is %d",org,num);
    }
}
