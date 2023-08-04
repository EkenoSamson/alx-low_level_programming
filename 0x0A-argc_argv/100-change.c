#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Description:  a program that convert money to a number of coints for change.
 *
 * @argc: the argument count.
 * @argv: the array pointer to the arguments.
 *
 * Return: 0 on success; 1 on error.
 *
 */

int main(int argc, char *argv[])
{
	int money, i, coins = 0;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	money = atoi(argv[1]);

	if (money < 0)
		printf("%d\n", 0);

	else
	{
		for (i = 0; i < 5; i++)
		{
			while (money >= coin[i])
			{
				coins++;
				money = money - coin[i];
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
