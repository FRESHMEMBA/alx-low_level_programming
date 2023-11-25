#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array.
 * @c: Char with which the array will be initialised.
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr_ptr;

	if (size == 0)
		return (NULL);

	arr_ptr = (char *)malloc(sizeof(char) * size);
	if (arr_ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr_ptr[i] = c;

	return (arr_ptr);
}
