#include "main.h"

/**
 * is_prime_number - check if number is prime
 *
 * @n: the number
 *
 * Return: 1 when prime else 0
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - check the divisors of the prime
 *
 * @number: the number
 * @div: the divisor
 *
 * Return: 1 when not divisible else 0
 *
 */

int _prime(int number, int div)
{
	if (div == 1)
		return (1);
	if (number % div == 0 && div > 1)
		return (0);
	return (_prime(number, div - 1));
}
