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
	listint_t *temp, *temp2, *start;

	start = *head;

	temp = malloc(sizeof(listint_t));
	temp = *head;
	if (temp != NULL)
	{
		temp = temp->next;
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
	}
	temp = start;
	temp->next = NULL;
	free(temp);
}
