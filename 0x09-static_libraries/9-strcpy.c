#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src.
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: destination.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	for (length = 0; src[length] != '\0'; length++)
	{

	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
