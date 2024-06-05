#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list add new node to.
 * @idx index of the list where the new node should be added.
 * @n: value of the new node to be added to the list.
 * Return: the address of the new node if successful, otherwise NULL;
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = get_dnodeint_at_index(*h, idx - 1);

	if (!temp)
		return (NULL);

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
