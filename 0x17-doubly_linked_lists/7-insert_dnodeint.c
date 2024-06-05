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
	dlistint_t *nptr;
	dlistint_t *ptr = get_dnodeint_at_index(*h, idx);

	if (!new_node)
		return (NULL);

	nptr = add_dnodeint_end(*ptnr, n);

	return (nptr);
}
