#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -Returns sum of all the parameters.
 * @n: Number of parameters thet pass to the function.
 * @....: A variable number of parameters to calculate sum.
 *
 * Return: if n == 0 - 0.
 * if not - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
