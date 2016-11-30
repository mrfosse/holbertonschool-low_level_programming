#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list.
 * @head: pointer to first node.
 * @str: pointer to the element to be added.
 * Return: returns adress of new node, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (temp->next);
}
