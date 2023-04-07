#include "main.h"

/**
 * flip_bits - fucntion that returns no. of bits flipped to get to the next num
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of flips.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	int count = 0;

	res = n ^ m;

	while (res > 0)
	{
		if (res & 1)
			count++;
		res = res >> 1;
	}
	return (count);
}
