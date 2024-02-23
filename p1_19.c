#include<stdio.h>
#include<string.h>

// Word count
void main()
{
    char arr[50][10],word[10],key,arr1[30];
    int a=0,i,j=0,count=0;
    printf("Enter string: ");
    gets(arr);
    printf("\n%s\n",arr);
    for (i = 0; arr[i]!='\0'; i++)
    {
        if(arr[i]==' ' || arr[i]=='\n')
        {
            a+=1;
        }
    }
    printf("No of words in above sentence is %d",a+1);

    // printf("Enter word to search: ");
    // scanf("%s",word);
    
    // for ( i = 0; i < a+1; i++)
    // {
    //     if(arr[i]==word){
    //         count++;
    //     }
    // }
    // printf("%s count is %d",word,count);
    














    // int *ptr=arr;
    // while (*ptr!='\0')
    // {
    //     if (*ptr==word)
    //     {
    //         a++;
    //     }
    //     ptr++;
    // }
    // printf("%s count is %d",word,a);
    
    
    
}