#include "function_pointers.h"

/**
 * array_iterator - Function tha executes a function.
 * executed function is given an array of integers.
 * @array: Array containing the integers.
 * @size: size of the array.
 * @action: pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL || size <= 0)
		return;

	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
