#include "lists.h"
/**
 * print_listint - adds a new node at index.
 * @head: list to be printed.
 * @index: insert new node here
 * Return: Number of nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
/*	listint_t *s; */

/*	s* = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL); */

/*	s = head; */
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	if (i != index)
		return (NULL);

	return (&head->n);
}
