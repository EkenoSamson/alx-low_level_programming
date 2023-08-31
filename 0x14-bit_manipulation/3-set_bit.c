#include "main.h"

/**
 * set_bit - a function that sets 1 to a given index.
 *
 * @n: pointer to the number.
 * @index: position to set bit to 1.
 *
 * Return: 1 if successful or -1 if an error is encountered.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
