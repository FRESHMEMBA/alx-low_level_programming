#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}
