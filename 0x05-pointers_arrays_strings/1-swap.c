#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to one of the integers to be swapped.
 * @b: A pointer to the other integer to be swapped.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
