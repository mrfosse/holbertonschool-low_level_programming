#include <stdlib.h>
#include "lists.h"
/**
 * pop-listint - delets the first item and returns the value.
 *
 * @head: pointer to the start of the list.
 * Return: returns the nodes value n.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int N;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	N = temp->n;
	if (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	return (N);
}
