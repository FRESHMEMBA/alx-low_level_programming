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
	int len = _strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (_strlen(str) - 1) / 2;

	for (i; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
