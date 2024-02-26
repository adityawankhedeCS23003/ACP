#include<stdio.h>

int main(){
    int n,i,key;
    printf("Enter no of elements for array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements for array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to check ");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            if (arr[i]%2==0)
            {
                printf("%d is even number\n",arr[i]);
                break;
            }
            else
            {
                printf("%d is odd number\n",arr[i]);
                break;
            }          
        }
        
    }
    return 0;
    
}
