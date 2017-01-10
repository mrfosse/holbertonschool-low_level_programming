#include "lists.h"

/**
 * print_dlistint - prints all elemets of a double linked list.
 * @h: pointer to first element of the list.
 * Return: returns the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
