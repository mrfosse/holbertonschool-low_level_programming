#include "holberton.h"
/**
 * cap_sting - makes first letter of each word capital.
 * Description: see above
 * @p: array to change
 * Return: returns the array
 */
char *cap_string(char *p)
{
	int count;

	count = 0;

	while (p[count] != '\0')
	{
		if (p[count] == ' '|| p[count] == ',' || p[count] == ';'
|| p[count] == '.' || p[count] == '!' || p[count] == '?' || p[count] == '"'
|| p[count] == '(' || p[count] == ')' || p[count] == '{' || p[count] == '}'
|| p[count] == '\t'|| p[count] == '\n')
		{
			if (p[count + 1] >= 'a' && p[count + 1] <= 'z')
			{
				p[count + 1] = p[count + 1] - 32;
				count++;
			}
			else
			{
				count++;
			}
		}
		else
		{
			count++;
		}
	}
	return (p);
}
