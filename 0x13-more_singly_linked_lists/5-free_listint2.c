#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: points to the head pointer.
 */

void free_listint2(listint_t **head)
{
	listint_t *holder = *head;
	listint_t *ptr = NULL;

	while (holder != NULL)
	{
		ptr = holder;
		holder = holder->next;
		free(ptr);
	}
	*head = NULL;
}
