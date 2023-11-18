#include "main.h"

/**
 * print_array - unction that prints n elements of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < 0 ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
