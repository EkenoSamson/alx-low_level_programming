#include "lists.h"

/**
 * add_node - add node at the beginning of linked list.
 * @head: pointer to pointer of the element.
 * @str: string to add.
 * Return: pointer to header.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
