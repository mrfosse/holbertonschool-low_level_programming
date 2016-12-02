#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - adds the value of each element.
 *
 * @head: pointer to the start of the list.
 * Return: returns the sum of all elements.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
