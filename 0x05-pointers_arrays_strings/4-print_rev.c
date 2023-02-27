#include "main.h"

/**
 * print_rev -  a function that prints a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int length;
	int i;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	for (i = length; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
