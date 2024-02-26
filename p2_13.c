#include<stdio.h>

int main()
{
    int i;
    char *ptr;
    char alpha='A';
    ptr=&alpha;
    while (*ptr<='Z')
    {
        printf("%c ",*ptr);
        (*ptr)++;
    }
}