#include <stdio.h>
#include <stdlib.h>

/** main - Entry point.
 * Description: Program that adds positive numbers.
 *
 * @argc: argument count:
 * @argv: argument vector.
 *
 * Return: 0 on success; 1 on failure.
 *
 */

int main(int argc, char *argv[])
{
	int arg, num, sum = 0;

	for (arg = 1; arg < argc; arg++)
	{
		for (num = 0; argv[arg][num] != '\0'; num++)
		{
			if (argv[arg][num] < '0' || argv[arg][num] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[arg]);
	}

	printf("%d\n", sum);

	return (0);
}

