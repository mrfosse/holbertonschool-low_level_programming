#include "lists.h"
/**
 * sum_listint - adds all elements togeather.
 * @head: list to add.
 *Return: returns the sum.
 */
int sum_listint(listint_t *head)
{
	int total;

	for (total = 0; head != NULL; head = head->next)
		total += head->n;
	return (total);
}
