#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @c: the character to be located
 * @s: the string to be searched
 * Return: if c is found - a pointer to the first occurence
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
