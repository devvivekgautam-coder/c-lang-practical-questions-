#include <stdio.h>

int leapYear(int);

int main()
{
    int year;

    printf("Enter any year : ");
    scanf("%d", &year);

    // Using if else

    // if (leapYear(year)) {
    //     printf("%d is a Leap Year.", year);
    // }
    // else {
    //     printf("%d is Not a Leap Year.", year);
    // }

    // Using switch case

    switch (leapYear(year)) {
    case 0:
        printf("%d is Not a Leap Year.", year);
        break;

    case 1:
        printf("%d is a Leap Year.", year);
        break;
    }

    return 0;
}

int leapYear(int year) {
    if (year % 4 == 0) {
        return 1;
    }
    else if (year % 100 != 0) {
        return 0;
    }
    else if (year % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}