#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to be modified.
 * @index: The index starting from 0 of the required bit.
 * Return: 1 if it worked,
 * or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n |= (1UL << index);
		return (1);
	}
	return (-1);
}

