#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* return -1 if array is a null pointer or if the array is empty*/
	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i); /*return the first index of value in array*/
	}

	/* return -1 if the value is not in the array*/
	return (-1);
}
