#include "lists.h"

/**
 * sum_listint - add up all the data of nodes.
 * @head: points to the first node.
 * Return: sum of data; 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

