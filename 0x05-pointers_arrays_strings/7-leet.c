#include "holberton.h"
/**
 * leet - replaces vouls with numbers
 * Description: see above
 * @p: array to change
 * Return: returns temp pointer.
 */
char *leet(char *p)
{
	char *temp;

	temp = p;

	while (*p != '\0')
	{
		while (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		while (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		while (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		while (*p == 't' || *p == 'T')
		{
			*p = '7';
		}
		while (*p == 'l' || *p == 'L')
		{
			*p = '1';
		}
		p++;
	}
	return (temp);
}
