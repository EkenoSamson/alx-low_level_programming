#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: the integer
 * @index: given position of the bit you'd want to get. 0 is the origin.
 * Return: the value of bit at given index or -1 if fails.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > 64)
		return (-1);
	if ((n & mask) != 0)
		return (1);
	return (0);
}

