// Write a program to find whether the given year is a leap year or not?


#include <stdio.h>

int main() {

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("the given year is a leap year");
    } else {
        printf("the given year is not a leap year");
    }

    return 0;
}