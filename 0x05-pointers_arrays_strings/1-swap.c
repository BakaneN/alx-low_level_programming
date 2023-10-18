#include "main.h"

/**
 * swap_int - function that swaps values of integers
 * @a: integer value 1
 * @b: integer value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
