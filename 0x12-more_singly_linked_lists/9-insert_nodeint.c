#include "lists.h"
/**
 * insert_nodeint_at_index - adds a node at index.
 * @head: list.
 * @idx: index to place node
 * @n: value to place at index
 * Return: returns new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *copy, *new;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; copy != NULL && i < idx; i++)
		copy += copy->n;
	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
