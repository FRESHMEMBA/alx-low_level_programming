#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the the bytes to be
 * searched for in s.
 * Return:  The number of bytes in the initial segment
 * of s wich consist only of bytes fro accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	char *a;
	unsigned int count = 0;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}
