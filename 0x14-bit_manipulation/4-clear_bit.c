#include "main.h"

/**
 * clear_bit - a function that sets the bit to 0 at a given index.
 *
 * @n: pointer to the number.
 * @index: position to unset the bit.
 *
 * Return: 1 if successful or -1 if errorneous.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
