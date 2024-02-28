#include <stdio.h>
#include <string.h>


//strstr()=check for the all occurences of the word in the string and passes null value when no more occurence found.

int countWord(const char *str, const char *word) {
    int count = 0;
    int wordLen = strlen(word);
    const char *ptr = str;

    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += wordLen;
    }

    return count;
}

int main() {
    char arr[100];
    char word[20];

    printf("Enter a string: ");
    gets(arr);

    printf("Enter the word to count: ");
    scanf("%s", word);

    int wordCount = countWord(arr, word);
    printf("The word '%s' appears %d times in the given string.\n", word, wordCount);

    return 0;
}
