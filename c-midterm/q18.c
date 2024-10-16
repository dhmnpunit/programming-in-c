// Q.18) Write a program to find the factorial of a given number?

#include <stdio.h>

int main() {

    int num, factorial;

    factorial = 1; 

    printf("Enter a number: ");
    scanf("%d", &num);


    int temp_num = 1;

    for (int i = 0; i < num; i++ ) { 
        factorial = factorial * temp_num;

        temp_num++;
    }


    printf("the factorial is: %d", factorial);

    return 0;
}