#include "lists.h"

/*
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first node in the list.
 * @n: value of the new node to be inserted.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = *temp;
	new_node->next = NULL;

	return (new_node);
}
