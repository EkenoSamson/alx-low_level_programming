#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: the minimum.
 * @max: maximum.
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
