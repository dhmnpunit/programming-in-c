// Q.1) WAP to calculate The Simple Interest?

/*
    si = p * r * t / 100
*/

#include <stdio.h>

int main() {

    float simple_interest, principle, rate, time;

    printf("Enter the principle amount, rate, and time resp.: ");
    scanf("%f %f %f", &principle, &rate, &time);

    simple_interest = principle * rate * time / 100;

    printf("The simple interest is: %f", simple_interest);

    return 0;
}