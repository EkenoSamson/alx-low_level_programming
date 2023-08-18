#include "variadic_functions.h"

/**
 * print_all - prints the input regardless of the data type.
 *
 * @format: the data type.
 */

void print_all(const char * const format, ...)
{
	int count = 0, i = 0;
	va_list inputs;

	while (format[count] != '\0')
		count++;
	va_start(inputs, format);

	while (i <= count)
	{
		if (i == 0)
		{
			if (format[i] == 'c')
				printf("%c", va_arg(inputs, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(inputs, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(inputs, double));
			else if (format[i] == 's')
			{
				if (!format[i])
					printf("(nil)");
				else
					printf("%s", va_arg(inputs, char *));
			}
		}
		else
		{
			if (format[i] == 'c')
				printf(", %c", va_arg(inputs, int));
			else if (format[i] == 'i')
				printf(", %d", va_arg(inputs, int));
			else if (format[i] == 'f')
				printf(", %f", va_arg(inputs, double));
			else if (format[i] == 's')
			{
				if (format[i])
					printf(", %s", va_arg(inputs, char *));
				else
					printf(", (nil)");
			}
		}
		i++;
	}
	va_end(inputs);
	printf("\n");
}

