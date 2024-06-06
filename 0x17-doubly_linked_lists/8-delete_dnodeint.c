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


/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @head: pointer to the list to be modified.
 * @index: the index of the node that should be deleted.
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = get_dnodeint_at_index(*head, index);

	/* if the list is empty or the specified index is out of bound */
	if (!*head || !temp)
		return (-1);

	/* if the node at the specified index is the first node */
	if (temp->prev == NULL)
	{
		temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	/* if the node at the specified index is the last node */
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	/*if the node at the specified node is somewhere in the list*/
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
