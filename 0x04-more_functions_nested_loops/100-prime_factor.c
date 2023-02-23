#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Description: program that finds largest prime factor of 612852475143
  * Return: 0 when success
  */

int main(void)
{
	long int num = 612852475143;
	long int prime;

	for (prime = 2; prime <= num; prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
