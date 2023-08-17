#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline.
 *
 * @separator: separate the strings.
 * @n: no. of strings to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	if (n == 0)
		return;
	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		string = va_arg(args, char *);

		if (!string)
			string = "(nil)";
		if (!separator)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	va_end(args);
	printf("\n");
}
