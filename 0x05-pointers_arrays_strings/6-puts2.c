#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: Pointer to that string to be printed.
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
