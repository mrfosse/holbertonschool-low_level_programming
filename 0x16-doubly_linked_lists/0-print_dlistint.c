#include "lists.h"
/**
 * print_dlistint - prints all parts of a linked list.
 * @h: pointer to list.
 * Return: returns the number of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		printf("%d\n", h->n);
	return (i);
}
