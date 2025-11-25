#include <stdio.h>

int findOdd(int arry[], int size);

int main () {
    int size;

    printf("Enter Array size : ");
    scanf("%d", &size);

    int arry[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the element of arry : ");
        scanf("%d", &arry[i]);
    }

    int odd = findOdd(arry, size);

    printf("Odd is : %d", odd);

    return 0;
}

int findOdd(int arry[], int size) {
    int odd = 0;

    for (int i = 0; i < size; i++) {
        if (arry[i] % 2 != 0) {
        odd++;
    }
    }

    return odd;
}