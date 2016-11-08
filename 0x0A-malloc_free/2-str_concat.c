#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars.
 * Description: and that initializes it with a specific char.
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
	a[count] = '\0';
	return (a);
}
