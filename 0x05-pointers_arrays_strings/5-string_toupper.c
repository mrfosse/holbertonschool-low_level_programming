#include "holberton.h"
/**
 * string_toupper - makes lower case letters uppercase.
 * Description: copies an array and makes lower case to upper case.
 * @p: pointer to copy
 * Return: none.
 */
char *string_toupper(char *p)
{
	int count;

	count = 0;

	while (p[count] != '0')
	{
		if (p[count] >= 'a' && p[count] <= 'z')
		{
			p[count] = p[count] - 32;
		}
		count++;
	}
	return (p);
}
