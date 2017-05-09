#include "lists.h"
/**
 * add_dnodeint - prints all parts of a linked list.
 * @head: pointer to list.
 * @n: data to add.
 * Return: returns the new node, othwise NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *s;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = *head;
	*head = s;
	return (s);
}
