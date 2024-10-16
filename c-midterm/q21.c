/*

Q.21) A company insures its drivers in the following cases:
− If the driver is married.
− If the driver is unmarried, male & above 30 years of age.
− If the driver is unmarried, female & above 25 years of age.
In all other cases the driver is not insured. If the marital status, 
sex and age of the driver are the inputs, write a program to determine whether the 
driver is to be insured or not?

*/

#include <stdio.h>

int main() {

    char marital_status, sex;
    int age;

    printf("Enter your marital status(Y/N), sex(M/F) and age: ");
    scanf("%c %c %d", &marital_status, &sex, &age);

    if (marital_status == 'Y') {
        printf("the driver is insured");
    } else {
        if (sex == 'M') {
            if (age > 30) {
                printf("the driver is insured");
            } else {
                printf("the driver is not insured");
            }
        } else {
            if (age > 25) {
                printf("the driver is insured");
            } else {
                printf("the driver is not insured");
            }
        }
    }

    return 0;
}