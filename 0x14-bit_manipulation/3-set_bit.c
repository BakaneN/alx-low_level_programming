#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: it's nothing but a pointer to change a number
 * @index: An index that set a bit 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
