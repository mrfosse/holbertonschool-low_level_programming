#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns value of node and index postition.
 *
 * @head: pointer to the start of the list.
 * @index: which node to return
 * Return: returns value of node at index position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (count != index)
	{
		if (head == NULL)
			return (0);
		head = head->next;
		count++;
	}

	return (head);
}
