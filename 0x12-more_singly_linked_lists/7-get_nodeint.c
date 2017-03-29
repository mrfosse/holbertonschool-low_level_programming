#include "lists.h"
/**
 * print_listint - adds a new node at index.
 * @head: list to be printed.
 * @index: insert new node here
 * Return: Number of nodes.
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
