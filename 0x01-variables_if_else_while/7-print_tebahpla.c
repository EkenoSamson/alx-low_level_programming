#include <stdio.h>
/**
  * main - entry point
  * Return: 0 when successful
  */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
	{
		putchar(le);
	}
	putchar('\n');

	return (0);
}
