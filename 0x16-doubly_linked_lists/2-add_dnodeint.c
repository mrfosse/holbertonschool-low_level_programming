#include "lists.h"

/**
 * add_dnodeint - prints all elemets of a double linked list.
 * @head: pointer to first node of the list.
 * @n: data to be added.
 * Return: returns the adress of the new node, NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
