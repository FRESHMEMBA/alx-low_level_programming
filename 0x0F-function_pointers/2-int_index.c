#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array to be searched.
 * @size: Number of elements in the array array.
 * @cmp: Pointer to the funtion to be used to compare values.
 * Return: the index of the first element which the cmp
 * function does not return 0;
 * If no element matches, returns -1;
 * If size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
