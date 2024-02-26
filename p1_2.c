#include <stdio.h>

int main()
{
	int arr[5],i,max=0;
    printf("Enter Elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nLargest Number %d\n",max);
  return 0;
}
