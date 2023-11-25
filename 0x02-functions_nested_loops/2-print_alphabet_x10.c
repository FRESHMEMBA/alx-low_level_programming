#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,
 * in lowecase, followed by a new line.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
