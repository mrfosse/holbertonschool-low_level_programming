#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates two strings
 * Description: see above
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: returns s otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int count, count2, k;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	count = 0;
	while (s1[count] != '\0')
		count++;
	while (s2[count2] != '\0')
		count2++;
	k = 0;
	if (n >= count2)
		k = count + count2;
	else
		k = count + n;

	s = malloc((k + 1) * sizeof(*s));
	count = 0;
	if (s == NULL)
		return (NULL);
	while (s1[count] != '\0')
	{
		s[count] = s1[count];
		count++;
	}
	count2 = 0;
	while (s2[count2] != '\0' && count < k)
	{
		s[count] = s2[count2];
		count++;
		count2++;
	}
	s[count] = '\0';
	return (s);
}
