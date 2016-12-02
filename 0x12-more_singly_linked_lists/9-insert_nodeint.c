#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - places new node and index postition.
 *
 * @head: pointer to the start of the list.
 * @index: where to place node
 * Return: returns value of new node, or NULL if fail.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp, *new_node;
	unsigned int count;

	count = 0;
	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	while (temp != NULL && count < index -1)
	{
		temp = temp->next;
		count++;
	}
	if (count != index - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
