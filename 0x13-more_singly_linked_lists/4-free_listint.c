#include "lists.h"

/**
 * freee_listint - free a listint_t list
 * @head: points to the first node.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
