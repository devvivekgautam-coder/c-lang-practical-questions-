// Write a C program to find even elements from an 1D array using Pointer.

#include <stdio.h>

int main () {
    int size, i, even = 0;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int array[size];
    int eve = *array;

    for (i = 0; i < size; i++) {
        printf("Enter the element of array : ");
        scanf("%d", &array[i]);
    }

    if (array[i] % 2 != 0) {
        even++;
    }

    printf("Even : %d", even);
    return 0;
}