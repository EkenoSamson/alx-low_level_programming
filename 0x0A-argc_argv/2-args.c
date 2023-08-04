#include <stdio.h>

/**
 * main - Entry point.
 * Description: Program that prints all arguments it receices.
 *
 * @argc: the number of arguments.
 * @argv: the array point to the arguments.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
