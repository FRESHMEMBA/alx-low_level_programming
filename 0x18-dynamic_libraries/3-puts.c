#include "main.h"

/**
 * _puts - Prints a string, followed by a new a line, to stdout.
 * @str: The pointer to the string to be printed.
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
