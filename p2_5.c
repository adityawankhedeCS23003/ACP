#include<stdio.h>

int *array(int *a,int *b,int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        b[i]=a[n-1-i];
    }
    return b;
}

int main()
{
    int n,i;
    printf("ENter the no of elements of array ");
    scanf("%d",&n);
    int a[n],b[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int *ptr=array(a,b,n);
    printf("Reversed Array\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;
}