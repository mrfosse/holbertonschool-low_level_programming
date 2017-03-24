#include "lists.h"
/**
 * print_list - prints all elements in a list_t list.
 * @h: list to be printed.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != (NULL); h = h->next, i++)
		printf("[%d] %s\n", h->len, h->str);

	return (i);
}
