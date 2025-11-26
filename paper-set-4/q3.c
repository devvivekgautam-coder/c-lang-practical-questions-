#include <stdio.h>

int findPrime(int);

int main () {
    int num;
    
    printf("Enter any number : ");
    scanf("%d", &num);

    if (findPrime(num)) {
        printf("%d is a Prime number.\n", num);
    }
    else {
        printf("%d is NOT a Prime number.\n", num);
    }
    return 0;
}

int findPrime(int num) {

    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}