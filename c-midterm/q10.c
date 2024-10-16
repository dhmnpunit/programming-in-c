/*
The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.


*/

#include <stdio.h>

int main() {

    int sub1, sub2, sub3, sub4, sub5;
    float percentage;

    printf("Enter the marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    percentage = ((sub1 + sub2 + sub3 + sub4 + sub5)* 100) / 500;


    if (percentage >= 60) {
        printf("First divison"); 
    } else if (percentage >= 50){
        printf("second divison");
    } else if (percentage >= 40) {
        printf("third divison");
    } else {
        printf("fail");
    }


    return 0;
}