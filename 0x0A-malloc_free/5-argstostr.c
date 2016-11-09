#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - measures the length of a string.
 * Descritpion: measures the string s.
 * @s: string to be messured/
 * Return: returns length of s.
 */
char *argstostr(int ac, char **av)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);

}

/**
 * _strdup - duplicates a string
 * Description: and returns the new pointer.
 * @str: string to be coppied..
 * Return: returns the pointer or NULL if it fails.
 */
char *_strdup(char *str)
{
	unsigned int count, length;
	char *a;

	length = _strlen(str);
	a = malloc(length + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count <= length)
	{
		a[count] = str[count];
		count++;
	}
	a[count] = '\0';
	return (a);
}
