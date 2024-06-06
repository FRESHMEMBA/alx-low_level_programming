#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node to be inserted.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int i;

    if (h == NULL)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    temp = *h;

    for (i = 0; temp != NULL && i < idx - 1; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = new_node;

    temp->next = new_node;

    return (new_node);
}
