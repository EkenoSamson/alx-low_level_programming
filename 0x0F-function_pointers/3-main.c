#include "3-calc.h"

/**
 * main - entry point.
 * Description: program that perform simple calculations.
 * @argc: count the arguments to the program.
 * @argv: Pointer to the arguments.
 * Return: the result
 */

int main(int argc, char **argv)
{
	int num_1, num_2;
	int (*f_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);

	f_ptr = get_op_func(argv[2]);

	if (f_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f_ptr(num_1, num_2));

	return (0);
}

