#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at position idx.
 * @head: pointer to first node of the list.
 * @index: position to insert new node.
 * @n: data to insert.
 * Return: returns 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp, *node, *new_node;

	if(head == NULL)
		return (-1);
	node = *head;
	for (count = 0; node->next; count++)
	{
		if (count == index)
			break;
		node = node->next;
	}
	if (count + 1 == index)
	{
		temp = node->prev;
		temp->next = node->next;
		free(node);
		return (1);
	}
	if (count != index)
		return (-1);
	if (index == 0)
	{
		if (node->next == NULL)
		{
			*head = NULL;
			free(*head);
			free(node);
			return (1);
		}
		temp = node->next;
		temp->prev = NULL;
		*head = temp;
		free(node);
		return (1);
	}
	temp = node->prev;
	new_node = node->next;
	new_node->prev = temp;
	temp->next = new_node;
	free(node);
	return (1);
}
