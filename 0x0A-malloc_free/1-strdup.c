#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicates a string
 * Description: and returns the new pointer.
 * @str: string to be coppied..
 * Return: returns the pointer or NULL if it fails.
 */
char *_strdup(char *str)
{
	unsigned int count;
	char *a;

	a = malloc(sizeof(str));
	if (a == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count <= sizeof(str))
	{
		a[count] = str[count];
		count++;
	}
	return (a);
	free(a);
}
