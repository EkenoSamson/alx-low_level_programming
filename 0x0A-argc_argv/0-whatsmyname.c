#include <stdio.h>

/**
 * main - entry point.
 * Description: program that prints its name.
 *
 * @argc: number of arguments to the main.
 * @argv: array to point to the arguments.
 *
 * Return: 0 on success.
 *
 */

int main(int argc __attribute__((unused)), char **argv)
{
	puts(*argv);

	return (0);
}
