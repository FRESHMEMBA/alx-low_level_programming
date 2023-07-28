#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginng of a list_t list.
 * @head: Pointer to the first node of the list.
 * @str: Value of th node to be added.
 * Return: Address of the new element, o NULL if it failed.
 */
list_t add_node(list_t **head, const char *str)
{
	list_t new_node;
	unsigned int str_len = 0;


	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
