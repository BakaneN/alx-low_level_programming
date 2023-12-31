#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: function parameter
 * Return: the length of a string in bytes
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
