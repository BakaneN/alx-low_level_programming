#include "main.h"

/**
 * _isdigit - function that digits 0 through to 9
 * @c: function parameter
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if  (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
