#include <stdio.h>

int main () {
    int num1, num2;

    printf("Enter any two number : ");
    scanf("%d %d", &num1, &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    if ((*ptr1 > *ptr2)) {
        printf("%d : is Larger.", *ptr1);
    }
    else if ((*ptr2 > *ptr1)) {
        printf("%d : is Larger.", *ptr2);
    }
    else {
        printf("Both are Same.");
    }

    return 0;
}