#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list.
 *
 * @head: pointer to the start of the list.
 * @n: data to be in next node.
 * Return: returns the adress of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (temp->next);
}
