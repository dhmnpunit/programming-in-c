#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 0; j <= num - i - 1; j++) {
            printf(" ");
        } 

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");

    }

    return 0;
}