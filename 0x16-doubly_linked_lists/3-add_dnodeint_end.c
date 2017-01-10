#include "lists.h"

/**
 * add_dnodeint_end - adds an elemets to the end of a linked list.
 * @head: pointer to first node of the list.
 * @n: data to be added.
 * Return: returns the adress of the new node, NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
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
