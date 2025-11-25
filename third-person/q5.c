#include <stdio.h>

int main () {
    for (int i = 10; i >= 6; i--) {
        for (int s = i; s > 6; s--) {
            printf("_ ");
        }
        for (int j = i; j <= 10; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}