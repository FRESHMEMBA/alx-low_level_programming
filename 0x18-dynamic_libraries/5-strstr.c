#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be searched for.
 * Return: A pointer t the beginning of the
 * located sustring,
 * or NULL if the substring i not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
