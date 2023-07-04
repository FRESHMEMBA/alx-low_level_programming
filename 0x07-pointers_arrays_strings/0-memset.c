#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to the memoery area to be filled.
 * @b: Constnt byte to fill the memory.
 * @n: The number of bytes to fill jthe memory with.
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (s[i] == '\0')
			break;

		s[i] = b;
	}

	return (s);
}
