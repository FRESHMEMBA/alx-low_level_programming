#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Node of the list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t nptr = h;

	while (nptr->next != NULL)
	{
		if (nptr->str != NULL)
			printf("[%d] %s\n", nptr->len, nptr->str);
		else
			printf("[0] (nil)");
		nptr = nptr->next;
		count++;
	}

	return (count);
}
