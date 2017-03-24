#include "lists.h"
/**
 * add_node_end - adds new element at the end of a list.
 * @head: list to add too.
 * @str: element to add.
 * Return: returns the adress of new element, NULL on fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *s, *copy;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	s->str = strdup(str);
	s->len = i;
	s->next = NULL;
	copy = *head;
	if (*head == NULL)
	{
		*head = s;
		return (*head);
	}
	for (; copy->next != NULL; copy = copy->next)
		;
	copy->next = s;
	return (copy->next);
}
