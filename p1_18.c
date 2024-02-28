#include<stdio.h>
#include<string.h>
void main()
{
    char arr[100];
    int i,a=0;
    printf("Enter string: ");
    gets(arr);
    for ( i = 0; i<strlen(arr); i++)
    {
        if(arr[i]!=' '){
        a++;
        }
    }
    printf("Character count %d\n",a);

}
