#include <stdio.h>

int findOdd();

int main () {
    int size;

    printf("Enter any number : ");
    scanf("%d", &size);

    int arry[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the element of arry : ");
        scanf("%d", &arry[i]);
    }

    int odd = findOdd(odd, arry);

    printf("%d is Odd", odd);

    return 0;
}

int findOdd(int arry[], int i) {
    int odd = 0;
    if (arry[i] % 2 == 0) {
        odd++;
    }
    return odd;
}