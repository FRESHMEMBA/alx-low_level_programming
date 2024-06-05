#include "main.h"

/**
 * _strpbrk - Searhes a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string cointaining the bytes to be
 * searched for.
 * Return: A pointer to the to the byte in s that matches
 * one of the bytes in accepts,
 * or NULL if if no such bytes is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
