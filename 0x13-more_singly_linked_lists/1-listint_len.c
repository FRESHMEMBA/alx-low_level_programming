#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Head of the list.
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
