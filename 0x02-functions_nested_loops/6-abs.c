#include "main.h"

/**
  * _abs - a function that computes the absolute value of an integer
  * Return: absolute value
  * @n: integer
  */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

