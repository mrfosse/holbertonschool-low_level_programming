#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - prints all elements of the linked list.
 * @head: pointer to first node.
 * @str: pointer to the element to be added.
 * Return: returns adress of new node, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *p;
	int count;

	count = 0;
	p = malloc(sizeof(str));
	if (p == NULL)
		return (NULL);
	while (str[count] != '\0')
	{
		p[count] = str[count];
		count++;
	}
	p[count] = '\0';


	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = p;
	temp->len = count;
	temp->next = *head;
	*head = temp;

	return (temp);
}
