#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional
 * array of integers.
 * @grid: 2 dimensional to be freed.
 * @height: Height of the 2 dimensional array.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
