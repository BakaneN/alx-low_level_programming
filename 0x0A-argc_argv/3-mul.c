#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - muliplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, a, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (!isdigit(argv[i][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
