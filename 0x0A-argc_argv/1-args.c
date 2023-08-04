#include <stdio.h>

/**
 * main - entry point.
 * Description: program that prints the number of arguments passed to it.
 *
 * @argc: the number of arguments.
 * @argv: the array to point to the arguments.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

