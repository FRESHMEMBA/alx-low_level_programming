#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at the specified index
 * in a linked list.
 * @head: The first node in the linked list.
 * @index: The index of the node to return.
 * Return: Pointer to the node at index index,
 * or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
