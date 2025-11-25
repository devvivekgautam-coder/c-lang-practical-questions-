// Write a C program to find even elements from an 1D array using Pointer.

#include <stdio.h>

int main () {
    int size, even = 0;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int array[size];
    int *eve = array;

    for (int i = 0; i < size; i++) {
        printf("Enter the element of array : ");
        scanf("%d", (eve + i));
    }

    for (int i = 0; i < size; i++) {
        if (*(eve + i) % 2 == 0) {
        even++;
    }
    }

    printf("Even : %d", even);
    return 0;
}