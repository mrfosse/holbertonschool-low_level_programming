#include "lists.h"

/**
 * free_dlistint - frees all elemets of a double linked list.
 * @head: pointer to first node of the list.
 * Return: returns none.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
