#include "main.h"

/**
 * create_array - function that dynamically creates an array and intialize it.
 *
 * @size: Size of the array.
 * @c: the character to initialize the array.
 *
 * Return: pointer to the array; NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(c));

	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}

