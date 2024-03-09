#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    int largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr+i));
    }

    largest = *ptr;

    for (i = 1; i < n; i++) {
        if (*(ptr+i) > largest) {
            largest = *(ptr+i);
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    free(ptr);

    return 0;
}
