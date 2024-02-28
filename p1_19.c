#include <stdio.h>
#include <string.h>


// strstr() is a predefined function used for string matching
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
