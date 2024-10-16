// Write a program that determines whether a given integer is even or odd. 
// The program should ask the user to enter an integer and then print 
// whether the number is even or odd?

/*


*/


#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num % 2 == 0) {
        printf("the num is even");
    } else {
        printf("The num is odd");
    }


    return 0;
}