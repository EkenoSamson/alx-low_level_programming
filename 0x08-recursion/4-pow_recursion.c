#include "main.h"

/**
 * _pow_recursion - a function that return value of x raised to power y
 * @x: the number
 * @y: the power
 * Return: the value
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y == 0)
			return (1);
		else
			return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
