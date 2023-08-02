#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Head node.
 * Return: The head node's data (n),
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = (*head);
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
