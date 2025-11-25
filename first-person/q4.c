#include <stdio.h>

int main() {
    int a, b, num;
    int *p1 = &a;
    int *p2 = &b;

    printf("Enter two numbers : ");
    scanf("%d %d", p1, p2);

    num = *p1;
    *p1 = *p2;
    *p2 = num;

    printf("After swap: a : %d, b : %d", a, b);

    return 0;
}