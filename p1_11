#include<stdio.h>

int main()
{
	int matrix1[2][2][2],matrix2[2][2][2],new[2][2][2];
	int i,j,k;
	printf("Enter the elements for first 3D array\n");
	for(i=0;i<2;i++)
	{
        printf("\nEnter the element of %d matrix\n",i+1);
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&matrix1[i][j][k]);
			}
			
		}
	}
	printf("\n\nEnter the elements for second 3D array\n");
	for(i=0;i<2;i++)
	{
        printf("\nEnter the element of %d matrix\n",i+1);
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&matrix2[i][j][k]);
			}
		}
	}

    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				new[i][j][k]=0;
				new[i][j][k]=matrix1[i][j][k]+matrix2[i][j][k];
			}		
		}
	}

	printf("\n\n Matrix 1\n");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d\t",matrix1[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("\n\n Matrix 2\n");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d\t",matrix2[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	
	printf("\n\nNew Matrix\n");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d\t",new[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

}
