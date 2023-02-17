#include <stdio.h>
/**
  * main - entry point
  * Return: 0 when successful
  */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}

