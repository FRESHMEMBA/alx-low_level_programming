#include "main.h"

/**
 * get_bit - Returns the vallue of a bit at a given index.
 * @n: The number to be searched.
 * @index: The index starting from 0 of the required bit.
 * Return: The value of the bit at index index,
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int target = -1;

	if (index < sizeof(unsigned long int) * 8)
		target = (n >> index) & 1;
	return (target);
}
