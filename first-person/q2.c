#include <stdio.h>

int vowels(char str[]);

int main () {
    char str[100];
    
    printf("Enter any word : ");
    gets(str);
    
    int count = vowels(str);

    printf("Count of Vowels : %d", count);

    return 0;
}

int vowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
           ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    return count;

}