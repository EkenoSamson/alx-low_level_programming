#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 for exit success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	long int mul;
	char err[] = "Error";

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;
		printf("%ld\n", mul);
	}
	else
	{
		printf("%s\n", err);
		return (1);
	}

	return (0);
}
