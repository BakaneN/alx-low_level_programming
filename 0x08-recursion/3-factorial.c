#include "main.h"

/**
 *factorial - function that returns factorial of a given number
 *@n: parameter of the function
 *Return: return 0 else -1 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	return ((n == 0 || n == 1) ? 1 : (n * factorial(n - 1)));
}
