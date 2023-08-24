#include "lists.h"

/**
 * print_list - prints all the elements of list_t list.
 * @h: pinter to the first element in linked list.
 * Return: number of elements printed.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}


