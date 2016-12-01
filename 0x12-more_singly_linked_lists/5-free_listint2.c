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
	listint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}

	*head = NULL;
}
