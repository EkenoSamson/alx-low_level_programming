#include "main.h"

/**
 * _sqrt_recursion - a function that return the natural square root of a number
 * @n: the given number
 * Return: the square root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}


/**
 * _sqrt - return the actual square root
 * @s: the number (assumed to be a square with a natural square root)
 * @r: the root
 * Return: the root
 */

int _sqrt(int s, int r)
{
	if (r * r > s)
		return (-1);
	else if (r * r == s)
		return (r);
	return (_sqrt(s, r + 1));
}
