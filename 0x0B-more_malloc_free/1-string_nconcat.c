#include "holberton.h"

/**
 * _strlen - measures the length of a string.
 * Descritpion: measures the string s.
 * @s: string to be messured/
 * Return: returns length of s.
 */
unsigned int _strlen(char *s)
{
	unsigned int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * string_nconcat - cats two strings by amount n.
 * @s1: string 1.
 * @s2: string 2.
 * @n: amount to take.
 * Return: returns pointer to new string, NULL on fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int h, i, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > _strlen(s2))
		size = _strlen(s1) + _strlen(s2);
	else
		size = _strlen(s1) + n;

	temp = malloc((size + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);

	for (h = 0; s1[h] != '\0'; h++)
		temp[h] = s1[h];
	for (i = 0; h < size && s2[i] != '\0'; i++, h++)
		temp[h] = s2[i];

	temp[h] = '\0';
	return (temp);
}
