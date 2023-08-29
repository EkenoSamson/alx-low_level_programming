#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 * @head: points to the pointer of a node.
 * @n: the data to add.
 * Return: address to the last node; NULL of it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *holder = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		holder = ptr;
		return (holder);
	}

	while (holder->next != NULL)
		holder = holder->next;
	holder->next = ptr;
	return (ptr);
}
