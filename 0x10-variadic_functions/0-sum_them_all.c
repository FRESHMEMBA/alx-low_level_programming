#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Th number of paramters
 * @...: A variable number of parameters
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_list;

	if (n == 0)
		return (0);

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list);

	return (sum);
}
