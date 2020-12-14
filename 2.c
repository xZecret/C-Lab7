#include <stdio.h>

int main()
{ //char, short, int, long, float, double, long double
    printf("char = %u\n", sizeof(char));
    printf("ptr char = %u\n", sizeof(char*));
    printf("short = %u\n", sizeof(short));
    printf("ptr short = %u\n", sizeof(short*));
    printf("int = %u\n", sizeof(int));
    printf("ptr int = %u\n", sizeof(int*));
    printf("long = %u\n", sizeof(long));
    printf("ptr long = %u\n", sizeof(long*));
    printf("float = %u\n", sizeof(float));
    printf("ptr float = %u\n", sizeof(float*));
    printf("double = %u\n", sizeof(double));
    printf("ptr double = %u\n", sizeof(double*));
    printf("long double = %u\n", sizeof(long double));
    printf("ptr long double = %u\n", sizeof(long double*));
}
