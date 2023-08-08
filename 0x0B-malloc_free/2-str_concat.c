#include "main.h"

/**
 * str_concat - Function that concatenate two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to str1.
 */

char *str_concat(char *s1, char *s2)
{
	char *f_str;
	unsigned int tot_count = 0, count1 = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	tot_count = tot_count + count1 + count2 + 1;

	f_str = malloc(tot_count * sizeof(char));

	if (f_str == NULL)
		return (NULL);
	count1 = 0;
	count2 = 0;
	tot_count = 0;

	while (s1[count1] != '\0')
	{
		f_str[tot_count] = s1[count1];
		count1++;
		tot_count++;
	}

	while (s2[count2] != '\0')
	{
		f_str[tot_count] = s2[count2];
		count2++;
		tot_count++;
	}

	return (f_str);
}
