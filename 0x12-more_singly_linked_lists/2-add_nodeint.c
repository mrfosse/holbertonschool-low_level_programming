#include "lists.h"
/**
 * add_nodeint - adds new element at the start of a list.
 * @head: list to add too.
 * @n: element to add.
 * Return: returns the adress of new element, NULL on fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = *head;
	*head = s;
	return (s);
}
