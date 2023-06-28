#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * includeing the terminating null byte '\0',
 * to the buffer pointed to by dest.
 * @dest: Destination where the string pointed to by src wil be copied.
 * @src: Pointer pointing to the string to be copied to dest.
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *final_dest = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (final_dest);
}
