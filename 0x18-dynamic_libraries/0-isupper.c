#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked.
 * Return: 1 if c is uppercase; 0 othherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
