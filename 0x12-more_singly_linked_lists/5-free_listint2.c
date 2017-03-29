#include "lists.h"
/**
 * free_listint2 - frees all elements in a list_t list.
 * @head: list to be freed.
 * Return: NONE.
 */
void free_listint2(listint_t **head)
{
	listint_t *copy, *temp;

	if (head == NULL || *head == NULL)
		return;
	for (copy = *head; copy != NULL; free(temp))
	{
		temp = copy;
		copy = copy->next;
	}
	*head = NULL;
}
