#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end.
 * @head: pointer to list.
 * @n: data to add.
 * Return: returns the new node, otherwise NULL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *s;

	for (; head != NULL; free(head), head = s)
		s = head->next;
}
