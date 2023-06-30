#include "main.h"

/**
 * string_toupper - Changes all lowercase leters of a string to uppercase.
 * @s: The string to be modified.
 * Return : The modifed version of s.
 */

char *string_toupper(char *s)
{
	char *result = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}

		s++;
	}

	return (result);
}
