#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that prints alphabets in lowercase
  * Return: 0 when successful
  */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
