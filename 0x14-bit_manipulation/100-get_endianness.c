#include "main.h"

/**
 * get_endianness - a function that checks endianness.
 *
 * Return: 0 if BE or 1 if LE
 */

int get_endianness(void)
{
	int test = 1;

	int *reg = &test;

	if (*reg)
		return (1);
	return (0);
}
