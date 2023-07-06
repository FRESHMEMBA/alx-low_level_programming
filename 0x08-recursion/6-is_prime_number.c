#include "main.h"

/**
 * is_prime_number - Determines whether the given number is a prime number or not.
 * @n: Number to be checked if it is a prime number or not.
 * Return: 1 if n is a prime number, othwerwise return 0.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	++i;
	return (is_prime_number(n));
}
