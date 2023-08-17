#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all arguments to a function.
 *
 * @n: named argument.
 * Return: sum of arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	long int sum = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);

	for (i = 0; i < n; ++i)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
