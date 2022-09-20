#include "main.h"
/**
 * swap_int -swap variables values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *a;
	int *b;
	
	*a = 98;
	*b = 42;
}
{
	*a += *b;
	*b = *a - *b;
	*a = *b - *b;
}
