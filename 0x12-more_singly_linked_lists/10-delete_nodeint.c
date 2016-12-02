#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node and index postition.
 *
 * @head: pointer to the start of the list.
 * @index: where to delete node
 * Return: returns 1, or -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int count;

	count = 0;
	temp = *head;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count != index - 1)
	{
		return (-1);
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}
