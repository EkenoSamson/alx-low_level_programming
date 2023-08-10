#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 *
 * @b: size of the memory to be allocated.
 * Return: a void pointer; exit if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

