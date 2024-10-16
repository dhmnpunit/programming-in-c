/*

In a company an employee is paid as under: 
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% 
of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500
 and DA = 98% of basic salary. If the employee's salary is input through the keyboard write 
 a program to find his gross salary?

*/

#include <stdio.h>

int main() {

    float basic_salary, hra, da, gross_salary;

    printf("enter your salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary < 1500) {
        hra = 0.1 * basic_salary;
        da = 0.9 * basic_salary;

        gross_salary = basic_salary + hra + da;
    } else {
        hra = 500;
        da = 0.98 * basic_salary;

        gross_salary = basic_salary + hra + da;
    }

    printf ("gross salary: %f", gross_salary);

    return 0;
}