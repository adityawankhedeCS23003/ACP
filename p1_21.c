#include <stdio.h>
#include <string.h>
int main()
{
    char temp[30];
    int n,i,j;
    printf("Enter the number of strings to sort: ");
    scanf("%d",&n); 
    char str[n][20];
    for (i = 0; i < n; i++)
    {
        scanf("%s",str[i]);
    }

//Bubble Sort
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <n-1-i; j++)
        {
            if (strcmp(str[j],str[j+1])>0)    
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
            
        }
        
    }
    printf("Sorted Strings\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n",str[i]);
    }
    
    
}
