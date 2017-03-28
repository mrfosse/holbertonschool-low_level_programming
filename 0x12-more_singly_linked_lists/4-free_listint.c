#include "lists.h"
/**
 * free_listint - frees all elements in a list_t list.
 * @head: list to be freed.
 * Return: NONE.
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

	for (; head != NULL; head = copy)
	{
		copy = head->next;
		free(head);
	}
}
