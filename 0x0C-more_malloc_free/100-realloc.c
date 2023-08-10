#include "main.h"

/**
 * _realloc - Reallocate memory using malloc and free.
 * @ptr: pointer previous memory.
 * @old_size: initial size.
 * @new_size: new size.
 * Return: pointer to the new memory.
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_r, *o_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr_r = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_r = malloc(new_size);

	if (ptr_r == NULL)
		return (NULL);
	o_ptr = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_r[i] = o_ptr[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			ptr_r[i] = o_ptr[i];
	}
	free(o_ptr);
	return (ptr_r);
}

