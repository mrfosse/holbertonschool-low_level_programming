#include "lists.h"

/**
 * get_dnodeint_at_index - returns data from node at postition index.
 * @head: pointer to first node of the list.
 * @index: location of node to be returned.
 * Return: returns data from node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
