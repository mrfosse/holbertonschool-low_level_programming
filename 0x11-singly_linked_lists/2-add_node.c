#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds node to the begging of the list.
 * @head: pointer to first node.
 * @str: pointer to the element to be added.
 * Return: returns adress of new node, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}


	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = count;
	temp->next = *head;
	*head = temp;

	return (temp);
}
