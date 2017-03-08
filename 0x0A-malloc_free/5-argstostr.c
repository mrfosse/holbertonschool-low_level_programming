#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * Description: overrights the firsts string's \n.
 * @src: string to add to the end of dest.
 * @dest: string to be amended to.
 * Return: returns the string dest.
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';

	return (dest);
}
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
 * argstostr - concats all args of the program
 * @ac: argument count?
 * @av: argument value?
 * Return: returns length of s.
 */
char *argstostr(int ac, char **av)
{
	int i, length;
	char *temp;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 1;
	for (i = 0; i < ac; i++)
		length = length + _strlen(av[i]) + 1;

	temp = malloc(length * sizeof(char));
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(temp, av[i]);
		_strcat(temp, "\n");
	}
	return (temp);
}
