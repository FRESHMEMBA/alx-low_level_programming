#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The pointer the string whose length is to be returned.
 * Return: The length of he string pointed to by s.
 */

int _strlen(char *s)
{

	int count = 0;
	char c = s[count];

	while (c != '\0')
	{
		count++;
		c = s[count];
	}

	return (count);
}
