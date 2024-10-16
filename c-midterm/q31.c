// reverse a number

#include <stdio.h>

int main() {

    int num, reverse, remainder;

    printf("enter a number: ");
    scanf("%d", &num);

    reverse = 0;

    for (int i = 1; num != 0; i++) {
        remainder = num % 10; // 7 6 5 4 3
        
        reverse = reverse * 10 + remainder; // 876543

        num = num / 10; // 123
    }

    printf("the reverse is: %d", reverse);

    return 0;
}