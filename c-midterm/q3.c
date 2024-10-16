// Write a Program to print different data types in ‘C’ and their ranges?

/*

    int

    float

    char

include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer Types 

    // char
    printf("Type: char\n");
    printf("Size: %zu bytes\n", sizeof(char));
    printf("Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);


    // unsigned char
    printf("Type: Unsigned char\n");
    printf("Size: %zu bytes\n", sizeof(unsigned char));
    printf("Range: 0 to %u\n\n", UCHAR_MAX);


    // short
    printf("Type: short\n");
    printf("Size: %zu bytes\n", sizeof(short));
    printf("Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);


    // unsigned short
    printf("Type: unsigned short\n");
    printf("Size: %zu bytes\n", sizeof(unsigned short));
    printf("Range: 0 to %u\n\n", USHRT_MAX);

    
    // int
    printf("Types: int\n");
    printf("Size: %zu bytes\n", sizeof(int));
    printf("Range: %d to %D\n\n", INT_MIN, INT_MAX);


    // unsigned int
    printf("Type: unsigned int\n");
    printf("Size: %zu bytes\n", sizeof(unsigned int));
    printf("Range: 0 to %u\n\n", UINT_MAX);

    
    // long
    printf("Type: long\n");
    printf("Size: %zu bytes\n", sizeof(long));
    printf("Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);


    // unsigned long
    printf("Type: unsigned long\n");
    printf("Size: %zu bytes\n", sizeof(unsigned long));
    printf("Range: 0 to %lu\n\n", ULONG_MAX);


    // float
    printf("Type: float\n");
    printf("Size: %zu bytes\n", sizeof(float));
    printf("Range: %e to %e\n\n", FLT_MIN, FLT_MAX);


    // double
    printf("Type: double\n");
    printf("Size: %zu bytes\n", sizeof(double));
    printf("Range: %.10e to %.10e\n\n", DBL_MIN, DBL_MAX);
    

    // long double
    printf("Type: long double\n");
    printf("Size: %zu bytes\n", sizeof(long double));
    printf("Range: %.10Le to %.10Le\n\n", LDBL_MIN, LDBL_MAX);
 
    
    return 0;
}


*/


#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    // char
    // printf("Type: char\n");
    // printf("Size: %zu bytes\n", sizeof(char));
    // printf("Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);


    // // unsigned char
    // printf("Type: Unsigned char\n");
    // printf("Size: %zu bytes\n", sizeof(unsigned char));
    // printf("Range: 0 to %u\n\n", UCHAR_MAX);

    // int 
    // printf("Type: int\n");
    // printf("Size: %zu bytes\n", sizeof(int));
    // printf("range: %d to %d", INT_MIN, INT_MAX);

    // float
    printf("Type: float");
    printf("Size: %zu bytes\n", sizeof(float));
    printf("range: %f to %f", FLT_MIN, FLT_MAX);


    return 0;
}