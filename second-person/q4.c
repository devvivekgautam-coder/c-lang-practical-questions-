#include <stdio.h>

int main () {
    int size;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arry[size];
    int *ptr = arry;

    for (int i = 0; i < size; i++) {
        printf("Enter the element of array : ");
        scanf("%d", &arry[i]);
    }

    printf("Squre of all element : ");
    for (int i = 0; i < size; i++) {
        ptr[i] = ptr[i] * ptr[i];
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }
    
    return 0;
}