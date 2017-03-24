#include "lists.h"
/**
 * list_len - counts all elements in a list_t list.
 * @h: list to be counted.
 * Return: returns number of items in list.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != (NULL); h = h->next, i++)
		;

	return (i);
}
