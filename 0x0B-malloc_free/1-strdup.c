#include "main.h"

/**
 * _strdup -  function returns a pointer to a string, duplicate of a string.
 *
 * @str: the original string.
 *
 * Return: a pointer to a new string.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = (char *)malloc(i * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		new_str[j] = str[j];

	return (new_str);
}

