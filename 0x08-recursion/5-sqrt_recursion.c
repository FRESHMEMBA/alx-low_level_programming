#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square roo  is to be calculated.
 * Return: The squae root o f.
 */

int _pow_recursion(int x, double y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

int _sqrt_recursion(int n)
{
	return (_pow_recursion(n, 0.5));
}	
