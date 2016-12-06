#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binart to unsigned int.
 *
 * @b: string to convert.
 * Return: returns converted number or 0 if one or more char in string
 * is not a 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int number;

	if (b == NULL)
	{
		printf("failed 1st check");
		return (0);
	}

	count = 0;
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
		{
			printf("failed 2nd check");
			return (0);
		}
		count++;
	}

	count = 0;
	number = 0;
	while (b[count] != '\0')
	{
		number = (number << 1) | (b[count] - 48);
		count++;
	}
	return (number);
}
