#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees the list.
 *
 * @head: pointer to the start of the list.
 * Return: returns none.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
