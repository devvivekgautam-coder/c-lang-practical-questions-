#include <stdio.h>

int main () {
    int arry[3];

    printf("Enter first num : ");
    scanf("%d", &arry[0]);

    printf("Enter second num : ");
    scanf("%d", &arry[1]);

    if (arry[0] > arry[1]) {
        printf("%d is smallest num.", arry[1]);
    }
    else if (arry[1] > arry[0]) {
        printf("%d is smallest num.", arry[0]);
    }
    else {
        printf("Both are same.");
    }
    
    return 0;
}