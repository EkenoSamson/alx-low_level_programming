#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int.
 *
 * @b: pointer to the binary number in string form.
 *
 * Return: the converted number or 0 if
 *	b is null
 *	the string contain a char that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int n;
	int p;

	if (!b)
		return (0);

	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	n--;

	for (p = 1; n >= 0; p *= 2)
	{
		if (b[n] & 1)
			result = result + p;
		n--;
	}
	return (result);
}

