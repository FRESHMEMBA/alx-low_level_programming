#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node  of the list.
 * @index: index of the node to searched for.
 * Return: the nth node of the list if it exists, NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	temp = head;
	i = 0;
	while (temp)
	{
		if (i == index)
			return (temp);

		i++;
		temp = temp->next;
	}

	return (NULL);
}
