#include "main.h"

/**
 * _puts_recursion - Prints a string, using recursion, floowed by a new line.
 * @s: Pointer to the string po be printed.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
