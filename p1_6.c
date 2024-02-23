#include<stdio.h>

int main()
{
    int n,n1,i,j;
    printf("Enter the number of elements for 1st array\n");
    scanf("%d",&n);
    printf("Enter the number of elements for 2nd array\n");
    scanf("%d",&n1);
    int arr[n],arr1[n1];
    printf("ENter elements for 1st array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENter elements for 2nd array\n");
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Common elements in both arrrays are\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n1; j++)
        {
            if (arr[i]==arr1[j]){
                printf("%d\n",arr[i]);
            }
        }
        
    }
    return 0;
}