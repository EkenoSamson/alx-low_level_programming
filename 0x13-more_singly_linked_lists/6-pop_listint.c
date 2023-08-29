#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t list.
 * @head: pointer to head pointer.
 * Return: data at the first node.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr = *head;

	if (*head == NULL)
		return (0);
	data = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
