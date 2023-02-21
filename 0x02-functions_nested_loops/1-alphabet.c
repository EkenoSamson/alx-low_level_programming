#include "main.h"

/**
  * print_alphabet - entry point
  * Description: A function that prints the alphabet in lowercase.
  */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
