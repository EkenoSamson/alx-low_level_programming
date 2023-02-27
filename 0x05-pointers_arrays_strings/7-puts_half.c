#include "main.h"

/**
 * puts_half -  a function that prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int length;
	int i;
	int j;

	for (length = 0; str[length] != '\0'; length++)
	{

	}

	if (length % 2 == 0)
		j = (length / 2);
	else
		j = ((length - 1) / 2);

	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
