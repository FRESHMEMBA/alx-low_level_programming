#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
 * @s: Pointer to the string whose length is to be returned.
 * Return: The length of the string pointed to by s.
 */

int strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (n);

	n++;
	strlen_recursion(++s);
}
