#include "lists.h"
/**
 * dlistint_len - returns the length of the list.
 * @h: pointer to list.
 * Return: returns the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
