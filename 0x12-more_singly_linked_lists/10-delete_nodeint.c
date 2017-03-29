#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index.
 * @head: list.
 * @idx: index to delete node
 * Return: returns 1, or -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i;
	listint_t *copy, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	copy = *head;
	if (idx == 0)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}
	for (i = 0; copy != NULL && i < idx - 1; i++)
		copy = copy->next;
	if (i != idx - 1)
	{
		return (-1);
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
