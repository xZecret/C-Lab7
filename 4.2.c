#include <stdio.h>

int main()
{
    unsigned long ul = 0x77BBCCDD;
    char *pul = &ul;
    for (int i = 0; i < sizeof ul; i++)
        printf("%X: %X\n", i, *(pul + i) & 0xff);
}