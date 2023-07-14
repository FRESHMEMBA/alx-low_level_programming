#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory of an array, using malloc.
 * @nmemb: The number to be stored in an array.
 * @size: Array size.
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(nmemb * size);

	if (pntr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pntr[i] = nmemb;

	return (pntr);
}

