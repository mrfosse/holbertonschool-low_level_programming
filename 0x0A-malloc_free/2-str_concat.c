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
 * str_concat - concatinates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: Returns the pointer, NULL on fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	int i, h;

	temp = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (temp == NULL)
		return (NULL);
	for (i = 0; i <= _strlen(s1); i++)
		temp[i] = s1[i];
	i--;
	for (h = 0; h <= _strlen(s2); i++, h++)
	{
		temp[i] = s2[h];
	}

	temp[i] = '\0';
	return (temp);
}
