#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer to the string to be encoded.
 * Return: s.
 */

char *leet(char *s)
{
	char allChar[128];

	int i;

	for (i = 0; i < 128; i++)
	{
		allChar[i] = (char)i;
	}

	allChar['a'] = 4;
	allChar['A'] = 4;
	allChar['e'] = 3;
	allChar['E'] = 3;
	allChar['o'] = 0;
	allChar['O'] = 0;
	allChar['t'] = 7;
	allChar['T'] = 7;
	allChar['l'] = 1;
	allChar['L'] = 1;

	i = 0;

	while (s[i] != '\0')
	{
		s[i] = allChar[(unsigned char)s[i]];
		i++;
	}

	return (s);
}

