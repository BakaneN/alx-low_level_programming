#include "main.h"

/**
 * _isupper - functions that checks for uppercase characters
 * Return: returns 1 or 0
 * @c: parameter of the function
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
