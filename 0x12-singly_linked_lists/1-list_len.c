#include "lists.h"

/**
 * list_len - count the number of elements a list.
 * @h: pointer to the first element.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
