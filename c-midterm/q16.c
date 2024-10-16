/*
Q.16) Write a program to input radius value from the keyboard 
and print the area of circle in floating and exponential notation?

*/

#include <stdio.h>

int main() {

    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("The area is %f\n", area);
    printf("The area is %e", area);

    return 0;
}