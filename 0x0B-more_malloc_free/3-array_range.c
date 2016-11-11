#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - creates an array of ints
 * Description: see above
 * @min: min size
 * @max: max size
 * Return: returns s otherwise NULL
 */
int *array_range(int min, int max)
{
	int *s;
	int count, n;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	s = malloc(n * sizeof(*s));

	if (s == NULL)
		return (NULL);

	count = 0;
	while (count < n)
	{
		s[count] = min;
		count++;
	}
	return (s);
}
