#include "main.h"

/**
  * _isdigit - A function that checks for a digit
  * @c: the digit
  * Return: 1 if it is a digit otherwise 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
