#include <stdio.h>

int main () {
    char str[100];
    int consonents = 0;

    printf("Enter any word : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            consonents++;
        }
    }

    printf("Count of Consonents : %d", consonents);

    return 0;
}