#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: a program that generates random valid passwords for 101-crackme
 * Return: o when successful
 */

int main(void)
{
	int ascii = 2772;
	int i = 0;
	int j;
	int random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
	{
		password[i] = ascii;
	}
	else
		i--;
	for (j = 0; j <= i; j++)
		printf("%c", password[j]);

	return (0);
}
