#include<stdio.h>
int main()
{
    int str[9]={5, 50,13,2,10,60,70,9,15},i,j,temp;
    printf("Original array\n");
    for ( i = 0; i < 9; i++)
    {
        printf("%d ",str[i]);
    }
    //Bubble Sort
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <9-1-i; j++)
        {
            if (str[j]>str[j+1])    
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
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