#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end.
 * @head: pointer to list.
 * @n: data to add.
 * Return: returns the new node, otherwise NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *s, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	s = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	for (; s->next != NULL; s = s->next)
		;
	s->next = new;
	return (s->next);
}
