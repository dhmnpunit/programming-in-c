/*

Write a program to print the sum of all numbers up
to a given number?

*/

#include <stdio.h>

int main() {

    int num, sum;

    sum = 0; // 1 3 6 10 15 21 28 36 45 55 66 78

    printf("Enter a number: ");
    scanf("%d", &num);


    int temp_num = 1;

    for (int i = 0; i < num; i++ ) { // 2 3 4 5 6 7 8 9 10 11 12
        sum = sum + temp_num;

        temp_num++;
    }


    printf("the sum is: %d", sum);

    return 0;
}