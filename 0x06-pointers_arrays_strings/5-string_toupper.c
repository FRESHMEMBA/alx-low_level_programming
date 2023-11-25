#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be modified.
 * Return: The modifed version of str.
 */

char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}

		str++;
	}

	return (result);
}
