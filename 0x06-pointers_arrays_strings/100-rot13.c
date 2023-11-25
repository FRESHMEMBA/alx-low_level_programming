#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: Pointer to the string to be encoded.
 * Return: s
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = (s[i] + 13) % 26;
		}

		i++;
	}

	return (s);
}
