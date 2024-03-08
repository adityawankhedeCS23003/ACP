#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of elements for 1st array\n");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("ENter elements for 1st array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENter elements for 2nd array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Common elements in both arrrays are\n");
    for ( i = 0; i < n; i++)
    {
            if (arr[i]==arr1[i]){
                printf("%d\n",arr[i]);
            }
        
    }
    return 0;
}
