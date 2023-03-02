#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenate two strings
 * @dest: the resulting string
 * @src: the appending string
 * @n: byte size
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + i] = *src;
		src++;
		i++;
	}
	dest[index + i] = '\0';

	return (dest);
}
