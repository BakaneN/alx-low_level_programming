#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: parameter 1 which is the base
 * @y: parameter 2 which is the exponent
 * Return: return value x to the power y else -1 if parameter 2 is > 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
