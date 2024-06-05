#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * linked list.
 * @head: pointer to the head of the list to summed up.
 * Return: the sum of all the data (n) in the list if the list is not empty,
 * NULL otherwise.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (!head)
		return (NULL);

	temp = head;
	sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
