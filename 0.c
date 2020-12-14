#include <stdio.h>

#define COLUMNS 16

void get_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        arr[i] = i;
}

void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    putchar('\n');
}

int main()
{
    int array[COLUMNS];
    get_arr(array, COLUMNS);
    print_arr(array, COLUMNS);
}