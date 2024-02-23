#include <stdio.h>
#include <string.h>
int main()
{
    char temp;
    int n,i,j;
    char str[20];
    printf("Enter string: ");
    scanf("%s",str);
    n=strlen(str);

//Bubble Sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-1-i; j++)
        {
            if (str[j]>str[j+1])    
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
            
        }
        
    }
    printf("Sorted string\n");
    printf("%s",str);
    return 0;
    
    
}