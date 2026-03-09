#include <stdio.h>

int main() {

    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    /*
    Size of short int: 2 bytes
    Size of int: 4 bytes
    Size of long int: 4 bytes
    Size of long long int: 8 bytes
    Size of unsigned int: 4 bytes
    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of long double: 12 bytes
    Size of char: 1 bytes

    Which two types have the same size?
    - int,long int,unsigned int, float have the same size 4 bytes.
    - double and long long int are 8 bytes

    Does unsigned int have different size than int?
    - No. unsigned int has the same size as int.
      The only difference is the range of values (unsigned cannot store negative numbers).
    */

    return 0;
}