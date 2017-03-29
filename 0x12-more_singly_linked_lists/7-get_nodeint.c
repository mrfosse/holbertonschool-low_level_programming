#include "lists.h"
/**
 * get_nodeint_at_index - adds a new node at index.
 * @head: list.
 * @index: insert new node here
 * Return: returns list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (0);
		head = head->next;
	}
	return (head);
}
