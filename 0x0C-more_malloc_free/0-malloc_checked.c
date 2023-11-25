#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates a specific
 * number of bytes in memory.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
