#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string.
 * @s: Pointer to be the string to be searche for the charater c.
 * @c: The character to be searched in the string pointed to by s.
 * Return: Pointer to the first occurenece of the character c in the string s;
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (s + i);

		i++;
	}

	if (c == '\0')
		return (s + i);

	return (NULL);
}
