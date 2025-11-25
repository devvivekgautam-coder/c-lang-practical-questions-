#include <stdio.h>
#include <string.h>

void revrseNum(char str[]);

int main () {
    char str[100];
    
    printf("Enter only three digit number : ");
    gets(str);
    
    revrseNum(str);
    
    return 0;
}

void revrseNum(char str[]) {

    int size = strlen(str);
    
    if (size != 3) {
        printf("Please Enter Only Three Digit Number !!");
        return;
    }
    
    printf("Reverse Number : ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}