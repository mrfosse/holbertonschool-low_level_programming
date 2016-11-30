#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list.
 * @head: pointer to first node.
 * @str: pointer to the element to be added.
 * Return: returns adress of the new node, NULL if failed.
 */
void free_list(list_t *head)
{
	list_t *temp;


	while (head != NULL) 
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
