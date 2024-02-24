#include <stdio.h>
#include <string.h>


//strcpn()=calculates the length of the number of characters before the 1st occurrence of character present in b/w the two input strings of parameter

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
    // fgets(arr, sizeof(arr), stdin);
    // arr[strcspn(arr, "\n")] = '\0'; // Remove newline character

    printf("Enter the word to count: ");
    scanf("%s", word);

    int wordCount = countWord(arr, word);
    printf("The word '%s' appears %d times in the given string.\n", word, wordCount);

    return 0;
}
