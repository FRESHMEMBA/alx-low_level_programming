#include "main.h"

/**
 * print_alphabet - Displays the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char char_var;

	for (char_var = 'a'; char_var <= 'z'; char_var++)
	{
		_putchar(char_var);
	}
	_putchar('\n');
}
