#include <stdlib.h>
#include "lists.h"
/**
 * pop-listint - delets the first item.
 * Description: delets item than returns the value of deleted item.
 * @head: pointer to the start of the list.
 * Return: returns the nodes value n.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int N;

	if (*head == NULL)
		return (0);

	temp = *head;
	N = temp->n;

	*head = temp->next;
	free(temp);

	return (N);
}
