#include "main.h"

/**
 * _abs - functions that computes the absolute value of integer
 * @a: parameter of function
 * Return: returns -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
