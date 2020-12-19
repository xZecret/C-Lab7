#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void print_arr(int* arr, int len);

int main()
{
	int array[10];
	for (int i = 0; i < 10; i++)
		array[i] = i;
	print_arr(array, 10);
}
void print_arr(int* arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d", arr[i]);
	putchar('\n');
}
