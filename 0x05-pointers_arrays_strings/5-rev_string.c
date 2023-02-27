#include "main.h"

/**
 * rev_string - a function the reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int length;
	int i;
	int j;
	char s1;
	char s2;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	i = 0;
	j = length - 1;
	while (i < j)
	{
		s1 = s[i];
		s2 = s[j];
		s[i] = s2;
		s[j] = s1;
		j--;
		i++;
	}
}
