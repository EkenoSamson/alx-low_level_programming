#include "main.h"

/**
  * print_alphabet_x10 - a function that prints lowercase ten times
  * Description: it's a function
  */

void print_alphabet_x10(void)
{
	int c;
	int alpha;

	for (c = 0; c < 10; c++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
