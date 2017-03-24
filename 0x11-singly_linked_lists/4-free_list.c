#include "lists.h"
/**
 * free_list - frees all elements in a list_t list.
 * @h: list to be freed.
 * Return: NONE.
 */
void free_list(list_t *head)
{
	list_t *copy;

	for (; head != NULL; head = copy)
	{
		copy = head->next;
		free(head->str);
		free(head);
	} 
}
