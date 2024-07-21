#include "search_algos.h";

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
	int step, prev, i;

	if (!array)
		return (-1);

	prev = 0;
	step = sqrt(size);

	while (array[fmin(size, step) - 1] < target)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}

	for (i = prev; i < fmin(step, size); i++)
		if (array[i] == target)
			return (i);
	return (-1);
}
