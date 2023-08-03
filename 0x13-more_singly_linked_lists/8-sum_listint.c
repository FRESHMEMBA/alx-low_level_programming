#include "lists.h"

/**
 * sum_listint - Adds all the data of a linked list.
 * @head: Pointer to the first node of the linked list.
 * Return: The sum of all the data,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
