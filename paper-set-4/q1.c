#include <stdio.h>

int main () {
    int n, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    while (n != 0){
        int last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    printf("Total is : %d", sum);

    return 0;
}