#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 * Description: The numbers 2 and 4 are excluded
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
