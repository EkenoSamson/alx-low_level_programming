#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line.
 *
 * @separator: the string to be printed between lines.
 * @n: number of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	printf("%d", va_arg(args, int));

	for (i = 1; i < n; ++i)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
