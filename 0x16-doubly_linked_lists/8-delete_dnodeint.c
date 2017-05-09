#include "lists.h"
/**
 * delete_dnodeint_at_index - removes node at idx position.
 * @head: pointer to list.
 * @index: position to remove.
 * Return: returns 1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new, *node, *s;

	if (head == NULL)
		return (-1);
	node = *head;
	for (i = 0; node->next; i++, node = node->next)
		if (i == index)
			break;
	if (i + 1 == index)
	{
		s = node->prev;
		s->next = node->next;
		free(node);
		return (1);
	}
	if (i != index)
		return (-1);
	if (index == 0)
	{
		if (node->next == NULL)
		{
			*head = NULL;
			free(*head);
			free(node);
			return (1);
		}
		s = node->next;
		s->prev = NULL;
		*head = s;
		free(node);
		return (1);
	}
	s = node->prev;
	new = node->next;
	new->prev = s;
	s->next = new;
	free(node);
	return (1);
}
