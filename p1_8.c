#include<stdio.h>

void main()
{
    int mat1[2][2],mat2[2][2],mat3[2][2];
    printf("Enter the elements for matrix 1\n");
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d",&mat1[i][j]);
            }
            
    }
    printf("Enter the elements for matrix 2\n");
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d",&mat2[i][j]);
            }
            
    }
    printf("matrix 1\n");
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ",mat1[i][j]);
            }
            printf("\n");
            
    }
    printf("matrix 2\n");
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ",mat1[i][j]);
            }
            printf("\n");            
    }   
    //main logic for addition
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j<2; j++)
            {
                mat3[i][j]=0;            
                mat3[i][j]=mat1[i][j]+mat2[i][j];
            }
            
    }
    printf("matrix 3\n");
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
            {
                printf("%d\t",mat3[i][j]);
            }
            printf("\n");
            
    }

}

