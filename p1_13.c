#include<stdio.h>

void main()
{
    int n1,r,c,i,j,k;
    printf("Enter the no of matrix in the 3D array\n");
    scanf("%d",&n1);
    printf("Enter the no of rows in each matrix\n");
    scanf("%d",&r);
    printf("Enter the no of columns in each matrix\n");
    scanf("%d",&c);
    int matrix1[n1][r][c];
    int matrix2[n1][r][c];

	printf("Enter the elements for 3D array\n");
	for(i=0;i<n1;i++)
	{
        printf("\nEnter the element of %d matrix\n",i+1);
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
				scanf("%d",&matrix1[i][j][k]);
			}
			
		}
	}
    for(i=0;i<n1;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
                matrix2[i][j][k]=matrix1[i][k][j];
                
			}		
		}
	}
    printf("\n3D Matrix \n");
    for(i=0;i<n1;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
                printf("%d\t",matrix1[i][j][k]);
                
			}
            printf("\n");		
		}
        printf("\n");
	}
    printf("Transpose of 3D Matrix \n");
    for(i=0;i<n1;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
                printf("%d\t",matrix2[i][j][k]);
                
			}
            printf("\n");		
		}
        printf("\n");
	}
}