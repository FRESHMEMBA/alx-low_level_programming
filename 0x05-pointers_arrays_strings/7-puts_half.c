#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints half of a string,
 * followed by  new line.
 * @str: Pointer to sting to be printed.
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) - 1) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
