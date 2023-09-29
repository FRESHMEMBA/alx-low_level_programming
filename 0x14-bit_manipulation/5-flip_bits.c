#include "main.h"

/**
 * flip_bits - Determins the number of bit needed to flip
 * to get from one number to another.
 * @n: First number.
 * @m: Second name.
 * Return: The number of bits required to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		count = count + (result & 1);
		result = result >> 1;
	}
	return (count);
}
