#include "lists.h"
/**
 * print_listint - prints all elements in a list_t list.
 * @h: list to be printed.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != (NULL); h = h->next, i++)
		printf("%d\n", h->n);

	return (i);
}
