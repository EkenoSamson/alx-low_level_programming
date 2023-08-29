#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 * @head: points the first node.
 * @idx: position.
 * @n: data.
 * Return: address of the new node; NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}
