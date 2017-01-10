#include "lists.h"

/**
 * dlistint_len - returns number of elemets in list.
 * @h: pointer to first element of the list.
 * Return: returns the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
