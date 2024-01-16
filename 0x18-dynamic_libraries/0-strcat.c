#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination where the string will be appended.
 * @src: Source of the string to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *start_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start_dest);
}
