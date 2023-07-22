#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: One of the integers to be added.
 * @b: The other integer to be added.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The integer to be subtracted from.
 * @b: The integer to be subtracted from a.
 * Return: The differene between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: One of the integers to be multiplied.
 * @b: The other integer to be multiplied.
 * return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates te modulus of two integers.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
