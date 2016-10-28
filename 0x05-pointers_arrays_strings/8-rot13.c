#include "holberton.h"
/**
 * rot13 - changes all letters by 13
 * Description: changes a to m up 13, n to z down 13.
 * @p: array to change
 * Return: returns array p.
 */
char *rot13(char *p)
{
	int count;

	count = 0;

	while (p[count] != '\0')
	{
		if ((p[count] >= 'a' && p[count] <= 'm') ||
		(p[count] >= 'A' && p[count] <= 'M'))
		{
			p[count] = p[count] + 13;
		}
		else
		{
			while ((p[count] >= 'n' && p[count] <= 'z') ||
			(p[count] >= 'N' && p[count] <= 'Z'))
			{
				p[count] = p[count] - 13;
			}
		}
		count++;
	}
	return (p);
}
