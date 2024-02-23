#include<stdio.h>

void main()
{
    int mat1[3][3], mat2[3][3], temp, count = 0;

    printf("Enter the elements for matrix 1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    //TRANSPOSE LOGIC
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat2[i][j] == mat1[i][j])
            {
                count++;
            }
            
        }
    }
    if (count==9)
    {
        printf("Matrix is symmetric\n");
    }
    else
    {
        printf("Matrix is not symmetric\n");
    }
    
    printf("matrix 1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
}