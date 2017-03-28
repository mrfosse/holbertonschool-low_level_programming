#include "lists.h"
/**
 * add_nodeint_end - adds new element at the end of a list.
 * @head: list to add too.
 * @n: element to add.
 * Return: returns the adress of new element, NULL on fail.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s, *copy;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = NULL;
	copy = *head;
	if (*head == NULL)
	{
		*head = s;
		return (*head);
	}
	for (; copy->next != NULL; copy = copy->next)
		;
	copy->next = s;
	return (copy->next);
}
