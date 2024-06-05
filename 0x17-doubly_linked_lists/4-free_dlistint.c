#include "lists"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list to be freed.
 * Return: None
 */
void free_dlistint(dlistint *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
