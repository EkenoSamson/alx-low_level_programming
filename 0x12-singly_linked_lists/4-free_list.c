#include "lists.h"

/**
 * free_list - free the dynamically allocated memory.
 * @head: the pointer.
 */

void free_list(list_t *head)
{
	list_t *store;

	while (head)
	{
		store = head->next;
		free(head->str);
		free(head);
		head = store;
	}
}
