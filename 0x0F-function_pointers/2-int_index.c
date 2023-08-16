#include "function_pointers.h"

/**
 * int_index - Function that points to integer-checking functions.
 * @array: It contains the integer.
 * @size: size of the array.
 * @cmp: Pointer to the fuction that checks the integer.
 *
 * Return: index of the integer in the array; -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}


