#include "main.h"

/**
 * _memcpy - fnction that copies memory area
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: returns a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
