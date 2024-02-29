#include<stdio.h>
#include<stdlib.h>

void find(float *pt,int n)
{
    int i;
    float max,min;
    max=*(pt);
    min=*(pt);
    for (i = 0; i < n; i++)
    {
        if(*(pt+i)>max)
        {
            max=*(pt+i); 
        }
        if(*(pt+i)<min)
        {
            min=*(pt+i);
        }
    }
    printf("THe largest element in array is %.2f\n",max);   
    printf("THe smallest element in array is %.2f\n",min);   
}


int main()
{
    float *ptr;
    ptr=(float*)malloc(10*sizeof(float)); 
    printf("Enter the elements of array\n");
    for (int i = 0; i < 10; i++)
    {
       scanf("%f", (ptr+i));
    }
    find(ptr,10);
    free(ptr);
}
