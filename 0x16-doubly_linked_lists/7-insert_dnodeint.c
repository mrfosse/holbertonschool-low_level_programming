#include "lists.h"
/**
 * insert_dnodeint_at_index - makes new node at n position.
 * @h: pointer to list.
 * @idx: position t add.
 * @n: data to add.
 * Return: returns address on new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *node, *s;

	node = *h;
	for (i = 0; node->next; i++)
	{
		if (i == idx)
			break;
		node = node->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (i + 1 == idx)
	{
		node->next = new;
		new->prev = node;
		new->next = NULL;
		return (new);
	}
	if (i != idx)
		return (NULL);
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	s = node->prev;
	s->next = new;
	node->prev = new;
	new->prev = s;
	new->next = node;
	return (new);
}
