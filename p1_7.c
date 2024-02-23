#include<stdio.h>

int main()
{
    int n,i,j,sum=0,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("ENter elements for the array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("original array\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[i]=' ';
            }
            
        }
        
    }
    printf("modified array\n");
    for ( i = 0; i < n; i++)
    {
        if(arr[i]!=' '){
        printf("%d\n",arr[i]);
    }
    }
}