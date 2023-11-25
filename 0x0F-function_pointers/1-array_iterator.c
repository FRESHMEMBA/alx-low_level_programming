#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given a parameter
 * on each element of an array.
 * @array: The array to be iterated.
 * @size: Size of the array array.
 * @action: The function to be executed on aech array element.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
	else
		return;
}
