#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the list.
 *
 * @head: pointer to the start of the list.
 * Return: returns none.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *start;

	start = *head;
	if (head != NULL)
	{
		*head = *(head)->next;
		while (head != NULL)
		{
			temp = *head->next;
			free(head);
			*head = temp;
		}
	}
	*head = start;
	*head->next = NULL;
}
