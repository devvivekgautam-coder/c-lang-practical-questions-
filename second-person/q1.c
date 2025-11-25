#include <stdio.h>

int main () {
    int num;

    printf("Enter any number : ");
    scanf("%d", &num);

    switch(num > 0) {
        case 0:
            printf("The number is a negative : %d", num);
            break;
        
        case 1:
            printf("The number is a Positive : %d", num);
            break;
    }

    return 0;
}