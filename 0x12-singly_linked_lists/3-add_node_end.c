#include "lists.h"

/**
 * add_node_end - add node at the end of single linked list.
 * @head: pointer to pointer to node.
 * @str: string.
 * Return: pointer;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dynamic = *head;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	while (dynamic->next)
		dynamic = dynamic->next;
	dynamic->next = ptr;
	return (ptr);
}
