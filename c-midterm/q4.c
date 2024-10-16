// Write a C program to find the sum and average of three numbers?

/*

    a b 
    a + b = sum

    avg = a + b/2

*/


#include <stdio.h>

int main() {

    int num1, num2, num3, sum;
    float avg;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    avg = sum/3;

    printf("sum is: %d\n", sum);
    printf("avg is: %f\n", avg);

    return 0;
}