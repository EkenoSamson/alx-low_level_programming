#include "3-calc.h"

/**
 * op_add - add b to a..
 * @a: num 1.
 * @b: num 2.
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtract b from a.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply a and b.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divide a with b.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: the result of a divided by b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - a modulus b
 * @a: num 1.
 * @b: num 2.
 *
 * Return: remainder.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
