#include "lists.h"
/**
 * free_dlistint - frees all nodes of a list.
 * @head: pointer to list.
 * Return: none.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *s;

	for (; head != NULL; free(head), head = s)
		s = head->next;
}
