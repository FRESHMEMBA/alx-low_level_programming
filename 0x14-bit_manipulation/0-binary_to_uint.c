#include "main.h"

/**
 * power - Calculates the power of a number raised to n.
 * @base: base
 * @exp: exponent
 * Return: base to the power of ecponent.
 */
unsigned int power(unsigned int base, unsigned int exp);

/**
 * binary_to_uint - Converts a birary number to an
 * unsigned int.
 * @b: A pointer to string of 0 and 1 chars.
 * Return: The converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i = 0, result = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * power(2, len - 1);
		i++;
		len--;
	}

	return (result);
}

unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int i, result = 1;

	for (i = 1; i <= exp; i++)
		result *= base;

	return (result);
}
