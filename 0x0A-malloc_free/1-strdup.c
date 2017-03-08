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
 * _strdup - duplcites a string.
 * @str: the string to be coppied.
 * Return: Returns the pointer, NULL on fail.
 */
char *_strdup(char *str)
{
	char *temp;
	unsigned int i, length;


	length = _strlen(str);
	temp = malloc(length + 1);
	if (temp == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		temp[i] = str[i];

	temp[i] = '\0';
	return (temp);
}
