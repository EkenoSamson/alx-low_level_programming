#include "main.h"

/**
 * _sqrt_recursion - a function that return the natural square root of a number
 * @n: the given number
 * Return: the square root
 * @i: the root
 */
int sqrt1(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt1(n, 1));
}


/**
 * sqrt1 - return the actual square root
 * @n: the number
 * @i: the iterator
 * Return: the root
 */

int sqrt1(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (sqrt1(n, i + 1));
}
