#include "main.h"

/**
 * _strlen - function to return lenght of a string.
 *
 * @s: string to be measured.
 * Return: length of the string.
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - Function that adds n characters of str2 to str1.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of character from str2.
 * Return: the pointer to string 1.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size, i = 0, k = 0, n_char;

	n_char = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n_char < 0)
		return (NULL);
	if (n_char >= _strlen(s2))
		n_char = _strlen(s2);

	size = _strlen(s1) + n_char + 1;
	ptr = malloc(size * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n_char > k)
	{
		ptr[i + k] = s2[k];
		k++;
	}
	ptr[i + k] = '\0';

	return (ptr);
}


