#include "lists.h"
/**
 * get_dnodeint_at_index - returns data from n position..
 * @head: pointer to list.
 * @index: location to pull from.
 * Return: returns data from index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; head = head->next, i++)
	{
		if (i == index)
			return (head);
	}
	return (NULL);
}
