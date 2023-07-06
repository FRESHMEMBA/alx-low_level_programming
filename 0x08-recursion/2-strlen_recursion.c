#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
 * @s: Pointer to the string whose length is to be returned.
 * Return: The length of the string pointed to by s.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (strlen_recursion(++s) + 1);
}
