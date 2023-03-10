#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 when successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
