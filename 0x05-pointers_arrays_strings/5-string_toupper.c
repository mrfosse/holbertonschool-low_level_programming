#include "holberton.h"
/**
 * string_toupper - copies an array in reverse.
 * Description: copies an array and reverses it.
 * @*: string to copy.
 * Return: returns the string dest.
 */
char *string_toupper(char *p)
{
	int count;

	count = 0;

	while (p[count] != '0')
	{
		if(p[count] >= 'a'&& p[count] <= 'z')
		{
			p[count] = p[count] - 32;
		}
		count++;
	}
	return (p);
}
