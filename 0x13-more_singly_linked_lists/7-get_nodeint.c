#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * get_nodeint_at_index - fetches node at a given position.
 * @head: head pointer.
 * @index: position.
 * Return: pointer to node at index; else NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int size = listint_len(head) - 1;

	if (index > size)
		return (NULL);

	while (i <= index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

/**
 * listint_len - counts the number of elements in a linked listint_t list.
 * @h: points to the first node.
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
