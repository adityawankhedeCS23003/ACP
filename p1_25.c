#include<stdio.h>
int main()
{
    int arr[20],i;
    int post=0,neg=0,even=0,odd=0,zero=0;

    printf("Enter the elements\n");
    for ( i = 0; i < 20; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < 20; i++)
    {
        if (arr[i]>0)
        {
            post++;
        }
        else if (arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        
        if (arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("No of postive numbers %d\n",post);
    printf("No of negative numbers %d\n",neg);
    printf("No of 0's %d\n",zero);
    printf("No of even numbers %d\n",even);
    printf("No of odd numbers %d\n",odd);
    
    return 0;
}