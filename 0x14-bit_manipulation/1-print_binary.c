#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be converted.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current_bit;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		current_bit = n >> i;

		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
		_putchar('0');
}
