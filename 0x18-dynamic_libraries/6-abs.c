#include "main.h"

/**
 * _abs - Computes the absoluute value of an integer.
 * n is the intger to be checked.
 * Return: Te absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}

	return (n);
}
