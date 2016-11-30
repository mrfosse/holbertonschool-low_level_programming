#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list.
 *
 * @h: pointer to the start of the list.
 * Return: returns number of elements in the list.
 */
size_t print_listint(const listint_t *h)
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