#include <stdio.h>

int main()
{ //char, int, double
    char *ch;
    int *i;
    double *d;
    printf("%X %X %X\n", ch, i, d);
    ch += 1;
    i += 1;
    d += 1;
    printf("%X %X %X\n", ch, i, d);
    ch -= 2;
    i -= 2;
    d -= 2;
    printf("%X %X %X\n", ch, i, d);
}