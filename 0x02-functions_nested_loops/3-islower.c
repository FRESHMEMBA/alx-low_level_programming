#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Return: True is the character is lowercase;
 * Returns 0 otherwise.
 */

int _islower(int c)
{
	return (c >= int('a') && c <= int('z'));
}
