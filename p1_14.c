#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int arr[10];
    printf("ENter the elements for the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Original array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
    //selection sort
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    printf("Sorted array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}

    
    return 0;
}