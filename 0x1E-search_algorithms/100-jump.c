#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * If value is not present or array is NULL, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, low, high, i;

	if (!array)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] >= value)
		break;
		prev += step;
	}

	low = (prev >= step) ? prev - step : 0;
	high = (prev < size) ? prev : size + step - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	for (i = low; i <= high && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}

	return (-1);
}
