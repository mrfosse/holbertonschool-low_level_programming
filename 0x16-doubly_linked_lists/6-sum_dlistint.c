#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data.
 * @head: pointer to first node of the list.
 * Return: returns the sum of all data.
 */
int sum_dlistint(dlistint_t *head)
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
