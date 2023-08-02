#include "main.h"
/**
 * is_perferct_square - Checks if a number is a perfect square.
 * @num: The number to be checked if it is a perfet square.
 * @guess: The approximatin of the square root of num.
 * @low: Lower bound
 * @high: Upper bound.
 * Return: The suare root of num if num is a perfect square,
 * otherwise returns 0.
 */
int is_perfect_sqaure(int num int guess, int low, int high)
{
	int mid, square;

	if (low > high)
		return (0);
	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == num)
		return (mid);
	else if (square < mid)
		return (is_perfect_square(num, guess, mid + 1, high));
	else
		return (is_perfect_square(num, guess, low, mid - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root  is to be calculated.
 * Return: The squae root of if n has a naturl square root,
 * otherwise returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (is_perfect_square(n, n / 2, 1, n / 2));
}
	
