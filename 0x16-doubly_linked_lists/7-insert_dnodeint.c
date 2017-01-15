#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at position idx.
 * @h: pointer to first node of the list.
 * @idx: position to insert new node.
 * @n: data to insert.
 * Return: returns the address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *temp, *node, *new_node;

	node = *h;
	for (count = 0; node->next; count++)
	{
		if (count == idx)
			break;
		node = node->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (count + 1 == idx)
	{
		node->next = new_node;
		new_node->prev = node;
		new_node->next = NULL;
		return (new_node);
	}
	if (count != idx)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	temp = node->prev;
	temp->next = new_node;
	node->prev = new_node;
	new_node->prev = temp;
	new_node->next = node;
	return (new_node);
}
