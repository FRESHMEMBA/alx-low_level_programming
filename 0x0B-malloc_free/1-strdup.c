#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 * Return: A pointer to the duplicated string,
 * or NULL if it fails.
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *str_ptr;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	str_ptr = (char *)malloc(len + 1);
	if (str_ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str_ptr[i] = str[i];

	return (str_ptr);
}
