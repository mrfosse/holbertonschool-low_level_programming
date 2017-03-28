#include "lists.h"
/**
 * listint_len - counts all elements in a list_t list.
 * @h: list to be counted.
 * Return: returns number of items in list.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != (NULL); h = h->next, i++)
		;

	return (i);
}
