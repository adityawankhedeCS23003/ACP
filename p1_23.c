#include<stdio.h>

int main()
{
    int str[9]={5, 50,13,2,10,60,70,9,15},i,j,temp;
    printf("Original array\n");
    for ( i = 0; i < 9; i++)
    {
        printf("%d ",str[i]);
    }
    //selection sort
    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 9; j++)
        {
            if (str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
            
        }
        
    }
    printf("\nSoreted array\n");
    for ( i = 0; i < 9; i++)
    {
        printf("%d ",str[i]);
    }
    
    return 0;
}