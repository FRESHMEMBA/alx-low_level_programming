#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: void
 */

void print_number(int n)
{
	int reverse_n = 0;

	int digit;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		reverse_n *= 10;
		reverse_n += n % 10;
		n /= 10;
	}

	while (reverse_n > 0)
	{
		digit = reverse_n % 10;
		reverse_n /= 10;
		_putchar(digit + '0');
	}
}
