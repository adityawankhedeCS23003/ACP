#include<stdio.h>
void main()
{
    char arr[100];
    int i,a=0;
    printf("Enter string: ");
    scanf("%s",arr);
    for ( i = 0; arr[i]!='\0'; i++)
    {
        if(arr[i]!=' ' || arr[i]!='\n' || arr[i]!='\t'){
        a++;
        }
    }
    printf("Character count %d\n",a);

}