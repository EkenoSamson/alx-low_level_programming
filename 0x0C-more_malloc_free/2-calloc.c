#include "main.h"

/**
 * _calloc - Function that allocates memory for an an array and intialize to 0.
 *
 * @nmemb: no of blocks.
 * @size: size of each block.
 *
 * Return: a pointer to the memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_initmem(ptr, nmemb * size);

	return (ptr);
}

/**
 * _initmem - Funtion that initialize a memory to zero.
 * @s: pointer to character.
 * @n: number of memories.
 * Return: pointer.
 */

char *_initmem(char *s, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
