#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the pointer to the list to be printed.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
