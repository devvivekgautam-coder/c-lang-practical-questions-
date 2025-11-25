#include <stdio.h>

int main () {
    int sub1, sub2, sub3, sub4, sub5;

    printf("Enter your five subjects number : ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    int total = sub1 + sub2 + sub3 + sub4 + sub5;

    printf("Your Total Marks Is : %d\n", total);

    int average = total / 5;

    printf("Your Average Is : %d\n", average);

    if (average >= 90) {
        printf("Grade : A");
    }
    else if (average >= 80) {
        printf("Grade : B");
    }
    else if (average >= 70) {
        printf("Grade : C");
    }
    else if (average >= 60) {
        printf("Grade : D");
    }
    else if (average >= 50) {
        printf("Grade : E");
    }
    else {
        printf("Grade : F");
    }

    return 0;
}