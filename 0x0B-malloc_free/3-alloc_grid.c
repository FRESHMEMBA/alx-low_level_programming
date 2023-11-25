#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional
 * array of integers.
 * @width: Width of the 2 dimensional array.
 * @height: Height of the 2 dimensional array.
 * Return: Pointer to the 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **arr_ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_ptr = (int **)malloc(sizeof(int *) * height);

	if (arr_ptr == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		arr_ptr[h] = (int *)malloc(sizeof(int) * width);

		if (arr_ptr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(arr_ptr[h]);

			free(arr_ptr);

			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr_ptr[h][w] = 0;
		}
	}

	return (arr_ptr);
}
