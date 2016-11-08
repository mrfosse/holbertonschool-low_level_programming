#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - measures the length of a string.
 * Descritpion: measures the string s.
 * @s: string to be messured/
 * Return: returns length of s.
 */
int _strlen(char *s)
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
 * str_concat - concatinates two string
 * Description: and returns the new pointer.
 * @s1: string one
 * @s2: string two
 * Return: returns the pointer or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	int count, count2;
	char *a;

	a = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count <= _strlen(s1))
	{
		a[count] = s1[count];
		count++;
	}
	count--;
	count2 = 0;
	while (count2 <= _strlen(s2))
	{
		a[count] = s2[count2];
		count++;
		count2++;
	}
	a[count] = '\0';
	return (a);
}
