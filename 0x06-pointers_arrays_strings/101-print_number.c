#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: void
 */

void print_number(int n)
{
	if ( n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	_putchar(n + '0');
}
