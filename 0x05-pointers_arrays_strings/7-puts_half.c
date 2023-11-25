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

	i = ((len - 1) / 2) + 1;

	if ((len % 2) == 0)
		i = len / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
