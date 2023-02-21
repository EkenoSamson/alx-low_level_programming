#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - a function that prints all natural numbers from n to 98
  *@n: starting point
  */

void print_to_98(int n)
{
	if (n >= 99)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
