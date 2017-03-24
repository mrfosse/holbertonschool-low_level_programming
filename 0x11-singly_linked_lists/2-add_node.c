#include "lists.h"
/**
 * add_node - adds new element at the start of a list.
 * @head: list to add too.
 * @str: element to add.
 * Return: returns the adress of new element, NULL on fail.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *s;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s->str = strdup(str);
	s->len = i;
	s->next = *head;
	*head = s;
	return (s);
}
