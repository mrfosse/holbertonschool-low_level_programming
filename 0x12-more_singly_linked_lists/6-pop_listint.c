#include "lists.h"
/**
 * pop_listint - adds new element at the start of a list.
 * @head: list to add too.
 * Return: returns the adress of new element, NULL on fail.
 */
int pop_listint(listint_t **head)
{
	listint_t *s;
	int copy;

	if (*head == NULL)
		return (0);
	s = *head;
	copy = s->n;
	*head = s->next;
	free(s);
	return (copy);
}
