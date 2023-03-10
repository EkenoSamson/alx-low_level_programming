#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer
 * @s: the string
 * Return: 0 when no number in the string
 */

int _atoi(char *s)
{
	int sign;
	int i;
	unsigned int res;

	sign = 1;
	i = 0;
	res = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && (s[i] <= '9' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	res *= sign;
	return (res);
}
