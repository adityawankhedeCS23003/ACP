#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    int i=0,character=0,lines=0,spaces=0;
    printf("Enter string: ");
    gets(arr);   
    for ( i = 0; i < strlen(arr); i++)
    {
        if (arr[i]==' ' || arr[i]=='\t')
        {
            spaces++;
        }
        else if (arr[i]=='.')
        {
            lines++;
        }
        else
        {
            character++;
        }    
    }
    
    printf("Character Count %d\n",character);
    printf("Word Count %d\n",spaces+1);
    printf("Spaces Count %d\n",spaces);
    printf("Lines Count %d\n",lines);
}