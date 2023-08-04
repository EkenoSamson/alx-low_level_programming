#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Description: Program that multiplies two numbers.
 *
 * @argc: number of argument.
 * @argv: array pointer to the arguments.
 *
 * Return: 0 for exit success.
 *
 */

int main(int argc, char *argv[])
{
	long int a, b, result;
	char err[] = "Error";

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		result = a * b;
		printf("%ld\n", result);
	}
	else
	{
		printf("%s\n", err);
		return (1);
	}

	return (0);
}
