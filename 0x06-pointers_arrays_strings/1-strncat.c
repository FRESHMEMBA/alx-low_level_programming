#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of byts to appended from src to dest.
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	int i;

	i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (start_dest);
}
