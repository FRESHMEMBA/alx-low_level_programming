#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destinantion string.
 * @src:Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src to dest.
 * Return: Pointer to the distination string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (dest_start);
}
